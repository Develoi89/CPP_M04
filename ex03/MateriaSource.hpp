#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* _spellBook[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & c );
        MateriaSource & operator = (MateriaSource const & c );
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif