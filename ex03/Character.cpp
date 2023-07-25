#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


Character::Character(std::string Name): _name(Name)
{
    for (size_t i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const & c): _name(c._name)
{
    std::cout << "copy constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }  
}

Character& Character::operator=(const Character& c)
{
    std::cout << "equal Character opperator was called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    return *this;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if(_inventory[i] != NULL)
            delete _inventory[i];
    }
    
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
            return ;
        }
    }
    std::cout << "Character " << this->_name << " can't be equiped with" << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
     if (idx < 0 || idx >= 4 || !this->_inventory[idx])
    {
        std::cout << "Incorrect index" << std::endl;
        return ;
    }
    AMateria* tmp;
    if (_inventory[idx] && (idx >= 0 && idx < 4))
    {
        tmp = _inventory[idx];
        tmp->unequip();
        _inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if ((_inventory[idx] != NULL) && (idx >= 0 && idx < 4))
    {
        std::cout << "* " << getName();
        _inventory[idx]->use(target);
    }
    else
        std::cout << "...?" << std::endl;
}

std::string Character::getType(int idx)
{
    if (_inventory[idx] == NULL)
        return "no one";
    return _inventory[idx]->getType();
}