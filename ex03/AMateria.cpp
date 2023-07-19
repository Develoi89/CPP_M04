#include "AMateria.hpp"

AMateria* AMateria::_head;

AMateria::AMateria(std::string const & type): _type(type), _next(NULL)
{
}

AMateria::AMateria(): _next(NULL)
{
}

AMateria::AMateria(AMateria const & c)
{
    _type = c._type;
}

AMateria & AMateria::operator = (AMateria const & c)
{
    std::cout << "equal AM operator called" << std::endl;
    _type = c._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::setType(std::string type)
{
    _type = type;
}

AMateria* AMateria::getNext()
{
    return _next;
}

void AMateria::setNext(AMateria* m)
{
    _next = m;
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << " shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (_type == "cure")
        std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* AMateria::getHead()
{
    return _head;
}

void AMateria::unequip()
{
    if (_head == NULL)
        _head = this;
    else
    {
        AMateria* actual = _head;
        while (actual->getNext() != NULL)
            actual = actual->getNext();
        actual->setNext(this);
    }
}

AMateria::~AMateria()
{
    if (_head)
    {
        while ((_head != NULL) && (_head->_next != NULL))
        {
            AMateria* actual = _head;
            while (actual->getNext() != NULL)
                actual = actual->getNext();
            delete actual;
        }
        if((_head->_next == NULL) && (_head != NULL))
            delete _head;
    }
}
