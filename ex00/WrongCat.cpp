#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat class created." << std::endl;
}

WrongCat::WrongCat(WrongCat const & c)
{
    _type = c._type;
    std::cout << "WrongCat class created from another class." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class destroyed" << std::endl;
}

std::string WrongCat::getType() const 
{
    return _type;
}

WrongCat & WrongCat::operator = (WrongCat const & c)
{
    _type = c._type;
    return *this;
}