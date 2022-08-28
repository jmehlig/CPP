
#include "Data.hpp"

Data* deserialize(uintptr_t raw)
{
    Data *data;

    data = (Data *)raw;
    return (data);
}

uintptr_t serialize(Data* ptr)
{
    uintptr_t u_ptr = reinterpret_cast<uintptr_t>(ptr);
    return (u_ptr);
}

int main()
{
    Data data;
    Data *data2;

    data.setTest(5);
    uintptr_t ptr = serialize(&data);
    data2 = deserialize(ptr);
    std::cout << data2->getTest() << std::endl;
    {
        Data *d = new Data();
        Data *d2;

        std::cout << d << std::endl;
        uintptr_t save = serialize(d);
        d2 = deserialize(save);
        std::cout << d2 << std::endl;

        delete d;
    }
}