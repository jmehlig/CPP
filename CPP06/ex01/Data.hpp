#include <iostream>
#include <stdint.h>

class Data {
    private:
        int test_ob;

    public:
        Data();
        ~Data();
        Data(Data &d);
        Data &operator=(Data &d);
        int getTest();
        void setTest(int i);
};