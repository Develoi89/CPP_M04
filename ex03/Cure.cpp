#include "Cure.hpp"

Cure::Cure(): _type("Cure")
{
}
Cure::Cure(Cure const & c)
{
    _type = c._type;
}
Cure & Cure::operator = (Cure const & c)
{
    _type = c._type;
    return *this;
}
Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    AMateria * c = new Cure;
    return c;
}