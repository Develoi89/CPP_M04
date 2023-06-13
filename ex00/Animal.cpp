#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal class created." << std::endl;
}

Animal::Animal( const Animal & c )
{
	_type = c._type;
	std::cout << "Animal class copyed from another class." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destroyed." << std::endl;
}

Animal & Animal::operator=( Animal const & c)
{
	_type = c._type;
	return *this;
}

void Animal::makeSound() const
{
}

std::string Animal::getType() const
{
	return _type;
}
