#include "Hfm.hpp"

int main()
{
    ICharacter* Cloud = new Character("Cloud");
    ICharacter* Sefirot = new Character("Sefirot");
    AMateria* first = new Ice;
    AMateria* second = new Cure;
    AMateria* third = second->clone();
    std::vector<AMateria*>& floor = AMateria::getFloor();

    Cloud->equip(first);
    Cloud->equip(third);

    Cloud->use(0, *Sefirot);
    Cloud->use(1, *Cloud);

    Cloud->unequip(0);
    Cloud->unequip(1);
    Cloud->use(0, *Sefirot);

    std::vector<AMateria*>::iterator it;

    for (it = floor.begin(); it != floor.end(); it++)
        std::cout << (*it)->getType() << " is on the floor." << std::endl;
        
    delete first;
    delete second;
    delete third;
    delete Cloud;
    delete Sefirot;
    
    return 0;
}

// int main() 
// {
//     IMateriaSource* src = new MateriaSource(); 
//     src->learnMateria(new Ice()); 
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice"); 
//     me->equip(tmp);
//     tmp = src->createMateria("cure"); 
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob"); 

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob; 
//     delete me; 
//     delete src;
//     return 0; 
// }