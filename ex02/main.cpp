#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    const AAnimal* l[4];
    for (size_t i = 0; i < 4; i++)
    {
        switch (i%2)
        {
        case 0:
            l[i] = new Dog();
            break;       
        default:
            l[i] = new Cat();
            break;
        }
    }

    for (size_t i = 0; i < 4; i++)
        delete l[i];
        
    Dog Pluto;
    Dog Snoopy;

    Pluto.setIdea(1, "buf buf");
    std::cout << "idea number 1 of Pluto is: " << Pluto.getIdea(1) << std::endl;
    Snoopy = Pluto;
    std::cout << "idea number 1 of Snoopy is: " << Snoopy.getIdea(1) << std::endl;
    //AAnimal test;
    return 0;
}