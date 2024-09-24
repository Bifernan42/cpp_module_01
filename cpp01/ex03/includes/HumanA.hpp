#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	weapon;
	public:
		HumanA(std::string, Weapon);
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

HumanA::HumanA(std::string new_name, Weapon new_weapon)
{
	name = new_name;
	weapon = new_weapon;
}
