#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::Brain(Brain const & c)
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = c._ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destroyed"<< std::endl;
}

Brain & Brain::operator =(Brain const & c)
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = c._ideas[i];
    return *this;
}

std::string Brain::getIdea(int i)
{
    if(_ideas[i][0])
        return _ideas[i];
    else   
        return ("no one");
}

void Brain::setIdea(int i, std::string idea)
{
    _ideas[i] = idea;
}