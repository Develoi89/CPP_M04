#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(Ice const & c)
{
    _type = c._type;
}

Ice & Ice::operator = (Ice const & c)
{
    std::cout << "equal I operator called" << std::endl;
    _type = c._type;
    return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    AMateria *c = new Ice;
    return c;
}