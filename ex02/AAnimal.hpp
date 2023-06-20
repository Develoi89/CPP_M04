#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const & c);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & c);
		virtual void makeSound() const = 0;
    	std::string getType() const;
		void setType(std::string type);

	protected:
		std::string _type;

};

#endif