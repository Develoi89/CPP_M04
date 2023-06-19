#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        Brain();
        Brain(Brain const & c);
        ~Brain();
        Brain & operator=(Brain const & c);

        std::string getIdea(int i);
        void setIdea(int i, std::string idea);

};

#endif