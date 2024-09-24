#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string str) {
			name = str;
		}
		~Zombie();
		void announce(void){
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif
