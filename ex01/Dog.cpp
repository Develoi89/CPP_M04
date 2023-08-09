#include "Dog.hpp"

Dog::Dog(): _dogBrain(new Brain())
{
    _type = "Dog";
    std::cout << "Dog class created." << std::endl;
}

Dog::Dog(Dog const &c): _dogBrain(new Brain())
{
    _type = c._type;
    for (size_t i = 0; i < 100; i++)
    {
        _dogBrain->setIdea(i, c._dogBrain->getIdea(i));
    }
    std::cout << "Dog class created from another class." << std::endl;
}

Dog::~Dog()
{
    delete _dogBrain;
    std::cout << "Dog class destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "buff buff!" << std::endl;
}

std::string Dog::getType() const
{
    return _type;
}

Dog & Dog::operator = (Dog const & c)
{
    _type = c._type;
    for (size_t i = 0; i < 100; i++)
    {
        _dogBrain->setIdea(i, c._dogBrain->getIdea(i));
    }
    
    return *this;
}

void Dog::setIdea(int i, std::string str)
{
    _dogBrain->setIdea(i, str);
}

std::string Dog::getIdea(int i) const
{
    return _dogBrain->getIdea(i);
}