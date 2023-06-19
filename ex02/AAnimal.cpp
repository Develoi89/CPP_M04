#include "AAnimal.hpp"


AAnimal::AAnimal()
{
	std::cout << "AAnimal class created." << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "AAnimal class created as type: " << type << std::endl;	
}

AAnimal::AAnimal( const AAnimal & c )
{
	_type = c._type;
	std::cout << "AAnimal class copyed from another class." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal class destroyed." << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & c)
{
	_type = c._type;
	return *this;
}

std::string AAnimal::getType() const
{
	return _type;
}

void AAnimal::setType(std::string type)
{
	_type = type;
}
