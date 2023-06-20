#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"


class Cure: public AMateria 
{
    public:
        Cure();
        Cure(Cure const & c);
        Cure & operator = (Cure const & c);
        ~Cure();
        AMateria* clone() const;
};

#endif