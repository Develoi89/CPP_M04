#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog class created." << std::endl;
}

Dog::Dog(Dog const &c)
{
    _type = c._type;
    std::cout << "Dog class created from another class." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog class destroyed" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "buff buff!" << std::endl;
}

std::string Dog::getType()
{
    return _type;
}

Dog & Dog::operator = (Dog const & c)
{
    _type = c._type;
    return *this;
}