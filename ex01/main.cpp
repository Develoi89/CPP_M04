#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    class Cat Felix;
    class Dog Pluto;

    std::cout << "Felix's type is: " << Felix.getType() << std::endl;
    Felix.makeSound();
    std::cout << "Pluto's type is: " << Pluto.getType() << std::endl;
    Pluto.makeSound();
    return 0;
}