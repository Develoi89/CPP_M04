#include "Hfm.hpp"

int main()
{
    ICharacter* Cloud = new Character("Cloud");
    ICharacter* Sefirot = new Character("Sefirot");
    AMateria* first = new Ice;
    AMateria* second = new Cure;
    std::vector<AMateria*>& floor = AMateria::getFloor();

    Cloud->equip(first);
    Cloud->equip(second);

    Cloud->use(0, *Sefirot);
    Cloud->use(1, *Cloud);

    // Cloud->unequip(0);
    // Cloud->unequip(1);
    // Cloud->use(0, *Sefirot);

    std::vector<AMateria*>::iterator it;

    for (it = floor.begin(); it != floor.end(); it++)
        std::cout << (*it)->getType() << std::endl;
        
    delete first;
    delete second;
    delete Cloud;
    delete Sefirot;
    
    return 0;
}