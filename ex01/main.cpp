#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    const Animal* l[10];
    for (size_t i = 0; i < 10; i++)
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

    for (size_t i = 0; i < 10; i++)
        delete l[i];
        
    Dog Pluto;
    Dog Snoopy;

    Pluto.setIdea(1, "buf buf");
    std::cout << "idea number 1 of Pluto is: " << Pluto.getIdea(1) << std::endl;
    Snoopy = Pluto;
    std::cout << "idea number 1 of Snoopy is: " << Snoopy.getIdea(1) << std::endl;

    return 0;
}