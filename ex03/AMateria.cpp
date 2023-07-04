#include "AMateria.hpp"

std::vector<AMateria*> AMateria::_floor;

AMateria::AMateria(std::string const & type): _type(type), _cloned(0)
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
    // if (_cloned == 1)
    //     delete this;
}

void AMateria::setCloned(int i)
{
    _cloned = i;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::setType(std::string type)
{
    _type = type;
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

void AMateria::unequip()
{
    _floor.push_back(this);
}

std::vector<AMateria*>& AMateria::getFloor()
{
    return _floor;
}