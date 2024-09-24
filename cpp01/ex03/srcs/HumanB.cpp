#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	weapon;
	public:
		HumanB(std::string);
		void attack();
}

void	attack()
{
	std::string type;
	type = weapon.getType();
	if (type.empty())
	{
		std::cout << name << " attacks with their hands\n";
		return ;
	}
}

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}
