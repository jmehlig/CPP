#include "Zombie.h"

int main(void)
{
    Zombie *Zombie1 = newZombie("First");
    randomChump("Random1");
    Zombie *Zombie2 = newZombie("Second");
    Zombie1->announce();
    Zombie2->announce();
    delete Zombie1;
    delete Zombie2;
    return (1);
}