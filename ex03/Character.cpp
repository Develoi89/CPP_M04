#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(std::string Name): _name(Name)
{
}
Character::Character(Character const & c)
{
    _name = c._name;
    for (size_t i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
            _inventory[i] = c._inventory[i]->clone();
        else
        {
            delete _inventory[i];
            _inventory[i] = c._inventory[i]->clone();
        }
    }  
}
Character & Character::operator = (Character const & c)
{
    _name = c._name;
    for (size_t i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
            _inventory[i] = c._inventory[i]->clone();
        else
        {
            delete _inventory[i];
            _inventory[i] = c._inventory[i]->clone();
        }
    }
    return *this;
}
Character::~Character()
{
}
std::string const & Character::getName() const
{
    return _name;
}
void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            break;
        }
    }
}
void Character::unequip(int idx)
{
    if (_inventory[idx] && (idx >= 0 && idx < 4))
        _inventory[idx] = NULL; // still we should to know what should we do with the unnequiped materia...DEVELOPING
}
void Character::use(int idx, ICharacter& target)
{
    if (_inventory[idx] && (idx >= 0 && idx < 4))
        _inventory[idx]->use(target);
}