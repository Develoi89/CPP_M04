#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:

        std::string                     _type;
        static std::vector<AMateria*>   _floor;
        int                             _cloned;

    public:

        AMateria(std::string const & type);
        AMateria();
        AMateria(AMateria const & c);
        AMateria & operator = (AMateria const & c);
        virtual ~AMateria();
        std::string const & getType() const;
        void setType(std::string type);
        void setCloned(int i);
        void unequip();
        static std::vector<AMateria*>& getFloor();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif