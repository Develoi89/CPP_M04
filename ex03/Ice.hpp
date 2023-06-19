#ifndef ICE.HPP
# define ICE.HPP
#include "AMateria.hpp"

class Ice: public AMateria 
{
    private:
        std::string _type;
    public:
        Ice();
        Ice(Ice const & c);
        Ice & operator = (Ice const & c);
        ~Ice();
        AMateria* clone() const;
};

#endif