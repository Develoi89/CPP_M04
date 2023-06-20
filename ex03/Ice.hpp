#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"


class Ice: public AMateria
{
    public:
        Ice();
        Ice(Ice const & c);
        Ice & operator = (Ice const & c);
        ~Ice();
        AMateria* clone() const;
};

#endif