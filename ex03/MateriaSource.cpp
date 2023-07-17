#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        _spellBook[i] = NULL;
    }
    
}

MateriaSource::MateriaSource(MateriaSource const & c )
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_spellBook[i] == NULL)
            _spellBook[i] = c._spellBook[i]->clone();
        else
        {
            _spellBook[i] = NULL;
            _spellBook[i] = c._spellBook[i]->clone();
        }
    }  
}

MateriaSource & MateriaSource::operator = (MateriaSource const & c )
{
    std::cout << "equal MS operator called" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        if (_spellBook[i] == NULL)
            _spellBook[i] = c._spellBook[i]->clone();
        else
        {
            _spellBook[i] = NULL;
            _spellBook[i] = c._spellBook[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_spellBook[i])
        {
            delete _spellBook[i];
        }
        else
            break;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
        for (size_t i = 0; i < 4; i++)
    {
        if (_spellBook[i] == NULL)
        {
            _spellBook[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria* m = NULL;
    for (size_t i = 0; i < 4; i++)
    {
        if (_spellBook[i] && _spellBook[i]->getType() == type)
        {
            if (type == "ice")
            {
                m = new Ice;
                break;
            }
            else if (type == "cure")
            {
                m = new Cure;
                break;
            }
        }
    }
    if (m->getType() == "cure" || m->getType() == "ice")
        return m;
    else
        return 0;
}