#include "AMateria.hpp"

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
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << "* shoots an ice bolt at <name> *" << std::endl;
    else if (_type == "cure")
        std::cout << * "heals <name>’s wounds *" << std::endl;
}