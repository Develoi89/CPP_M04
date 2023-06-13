#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "string"

class Dog: public Animal
{
    public:
    Dog();
    Dog(Dog const &c);
    ~Dog();

    Dog & operator = (Dog const &c);
    std::string getType() const;
    void makeSound() const;
};

#endif