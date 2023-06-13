#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "string"

class WrongCat: public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(WrongCat const &c);
    ~WrongCat();

    WrongCat & operator = (WrongCat const &c);
    std::string getType() const;
};

#endif