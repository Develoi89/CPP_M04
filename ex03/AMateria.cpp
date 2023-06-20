#include "AMateria.hpp"

std::vector<AMateria*> AMateria::_floor;

AMateria::AMateria(std::string const & type): _type(type)
{
}

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria const & c)
{
    _type = c._type;
}

AMateria & AMateria::operator = (AMateria const & c)
{
    _type = c._type;
    return *this;
}

AMateria::~AMateria()
{
    // delete this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
    else if (_type == "cure")
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void AMateria::unequip()
{
    _floor.push_back(this);
}

std::vector<AMateria*>& AMateria::getFloor()
{
    return _floor;
}