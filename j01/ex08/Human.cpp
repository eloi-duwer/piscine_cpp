#include <string>
#include <iostream>
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {

	std::cout << "Melee attack on " << target << std::endl;

}

void	Human::rangedAttack(std::string const & target) {

	std::cout << "Ranged attack on " << target << std::endl;

}

void	Human::intimidatingShout(std::string const & target) {

	std::cout << "Intimitading shout on " << target << std::endl;

}

void	Human::action(std::string const & action_name, std::string const & target) {

	std::string names[] = {
		std::string(MELEE),
		std::string(RANGED),
		std::string(SHOUT)
	};
	function_ptr actions[] = {
		&Human::meleeAttack, 
		&Human::rangedAttack, 
		&Human::intimidatingShout
	};
	int i = 0;

	while (i < 3) {
		if (names[i].compare(action_name) == 0) {
			(this->*actions[i])(target);
			return;
		}
		++i;
	}
	std::cout << "The action name " << action_name << " is not supported yet" << std::endl;
}
