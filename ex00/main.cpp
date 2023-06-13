#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType()<< " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;

// Dog Pluto; 
// Cat Felix;

// std::cout << Pluto.getType() << " Says ";
// Pluto.makeSound();
// std::cout << Felix.getType() << " Says ";
// Felix.makeSound();
return 0;
}