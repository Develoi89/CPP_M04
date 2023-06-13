#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "string"

class Cat: public Animal
{
    public:
    Cat();
    Cat(Cat const &c);
    ~Cat();

    Cat & operator = (Cat const &c);
    void makeSound() const;
    std::string getType() const;
};

#endif