#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria* inventory[4];
    public:
        Character(std::string Name);
        Character(Character const & c);
        Character & operator = (Character const & c);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif