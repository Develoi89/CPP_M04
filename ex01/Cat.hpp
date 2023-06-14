#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "string"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* _catBrain;

    public:
        Cat();
        Cat(Cat const &c);
        ~Cat();

        Cat & operator = (Cat const &c);
        void makeSound() const;
        std::string getType() const;
        void setIdea(int i, std::string str);
        std::string getIdea(int i) const;
};

#endif