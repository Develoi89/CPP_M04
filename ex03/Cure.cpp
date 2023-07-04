#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
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
    // if (_cloned == 1)
    //     delete (this);
}

AMateria* Cure::clone() const
{
    AMateria * c = new Cure;
    c->setCloned(1);
    return c;
}