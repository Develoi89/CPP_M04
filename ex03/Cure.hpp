#ifndef CURE.HPP
# define CURE.HPP
#include "AMateria.hpp"

class Cure: public AMateria 
{
    private:
        std::string _type;
    public:
        Cure();
        Cure(Cure const & c);
        Cure & operator = (Cure const & c);
        ~Cure();
        AMateria* clone() const;
};

#endif