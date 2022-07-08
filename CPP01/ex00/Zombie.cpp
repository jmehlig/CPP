#include "Zombie.h"

void Zombie::setName(std::string name_in)
{
    name = name_in;
}

std::string Zombie::getName(void)
{
    return (name);
}

void Zombie::announce(void)
{
    std::string name = getName();
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name_in)
{
    name = name_in;
    std::cout << "The Zombie " << name << " got created!" << std::endl;
}

Zombie::~Zombie()
{
    std::string name = getName();
    std::cout << "The Zombie " << name << " was destroyed!" << std::endl;
}