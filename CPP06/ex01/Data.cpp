
#include "Data.hpp"

Data::Data() {}

Data::~Data() {}

Data::Data(Data &d) : test_ob(d.test_ob) {}

Data &Data::operator=(Data &d)
{
    if (this == &d)
        return (*this);
    *this = d;
    return (*this);
}

int Data::getTest() { return (test_ob); }

void Data::setTest( int i ) { test_ob = i; }

