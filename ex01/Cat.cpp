#include "Cat.hpp"

Cat::Cat(): _catBrain(new Brain())
{
    _type = "Cat";
    std::cout << "Cat class created." << std::endl;
}

Cat::Cat(Cat const & c): _catBrain(new Brain())
{
    _type = c._type;
    for (size_t i = 0; i < 100; i++)
    {
        _catBrain->setIdea(i, c._catBrain->getIdea(i));
    }
    std::cout << "Cat class created from another class." << std::endl;
}

Cat::~Cat()
{  
    delete _catBrain;
    std::cout << "Cat class destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meooow!" << std::endl;
}

std::string Cat::getType() const 
{
    return _type;
}

Cat & Cat::operator = (Cat const & c)
{
    _type = c._type;
    for (size_t i = 0; i < 100; i++)
    {
        _catBrain->setIdea(i, c._catBrain->getIdea(i));
    }

    return *this;
}

void Cat::setIdea(int i, std::string str)
{
    _catBrain->setIdea(i, str);
}

std::string Cat::getIdea(int i) const
{
    return _catBrain->getIdea(i);
}