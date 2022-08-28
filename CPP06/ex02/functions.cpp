#include "Classes.hpp"

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A\n";
    }
    catch(std::bad_cast exp)
    {
        try
        {      
            B &b = dynamic_cast<B&>(p);
            std::cout << "B\n";
        }
        catch(std::bad_cast exp)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout << "C\n";
            }
            catch(std::bad_cast exp)
            {
                std::cout << "No possible conversion!\n";
            }
        }
    }
}

void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a != NULL)
        std::cout << "A\n";
    else if ( b != NULL)
        std::cout << "B\n";
    else if (c != NULL)
        std::cout << "C\n";
}

Base * generate(void)
{
    int i;
    Base *base;
    A *a;
    B *b;
    C *c;

    std::srand((unsigned int)time(NULL));
    i = rand() % 3;
    std::cout << i << std::endl;
    switch(i)
    {
        case 0:
        {
            a = new A();
            base = dynamic_cast<Base *>(a);
            break;
        }
        case 1:
        {
            b = new B();
            base = dynamic_cast<Base *>(b);
            break;
        }
        case 2:
        {
            c = new C();
            base = dynamic_cast<Base *>(c);
            break;
        }
    }
    return (base);
}

int main()
{
    Base *b = generate();
    Base &b_ref = *b;
    identify(b);
    identify(b_ref);
    delete b;
}