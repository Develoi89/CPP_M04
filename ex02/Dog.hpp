#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include <string>
#include "Brain.hpp"
#include <iostream>

class Dog: public AAnimal
{
    private:
        Brain* _dogBrain;

    public:
        Dog();
        Dog(Dog const &c);
        ~Dog();

        Dog & operator = (Dog const &c);
        std::string getType() const;
        void makeSound() const;
        void setIdea(int i, std::string str);
        std::string getIdea(int i) const;
};

#endif