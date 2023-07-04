#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
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
                m->setCloned(1);
                break;
            }
            else if (type == "cure")
            {
                m = new Cure;
                m->setCloned(1);
                break;
            }
        }
    }
    if (m->getType() == "cure" || m->getType() == "ice")
        return m;
    else
        return 0;
}