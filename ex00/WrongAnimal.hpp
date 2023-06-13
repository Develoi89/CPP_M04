#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & c);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & c);
		virtual void makeSound() const;
    	std::string getType() const;

	protected:
		std::string _type;

};

#endif