#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class FloorList;

class AMateria
{
    protected:

        std::string                     _type;
        AMateria*                       _next;
        static AMateria*               _head;

    public:

        AMateria(std::string const & type);
        AMateria();
        AMateria(AMateria const & c);
        AMateria & operator = (AMateria const & c);
        virtual ~AMateria();

        AMateria* getHead();
        std::string const & getType() const;
        AMateria* getNext();
        void setNext(AMateria* m);
        void setType(std::string type);
        void unequip();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif