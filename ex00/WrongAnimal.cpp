#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal class created." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & c )
{
	_type = c._type;
	std::cout << "WrongAnimal class copyed from another class." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destroyed." << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & c)
{
	_type = c._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "piopio!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}
