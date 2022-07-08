#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void setName(std::string name);
        std::string getName(void);
        void announce(void);
        Zombie(std::string name);
        ~Zombie();
};