#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string & getType();
		void setType(std::string);
}

const std::string & getType()
{
	const std::string & return_value = type;
	return (return_value);
}
