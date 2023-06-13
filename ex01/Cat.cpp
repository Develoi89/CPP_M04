#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat class created." << std::endl;
}

Cat::Cat(Cat const & c)
{
    _type = c._type;
    std::cout << "Cat class created from another class." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat class destroyed" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meooow!" << std::endl;
}

std::string Cat::getType()
{
    return _type;
}

Cat & Cat::operator = (Cat const & c)
{
    _type = c._type;
    return *this;
}