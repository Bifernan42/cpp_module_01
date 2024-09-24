#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void set_name(std::string str) {
			name = str;
		}
		~Zombie();
		void announce(void){
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
};

Zombie*	zombieHorde(int N, std::string name);


#endif
