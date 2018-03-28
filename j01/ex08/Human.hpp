#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_ 

#include <string>

#define MELEE	"melee"
#define RANGED	"ranged"
#define SHOUT	"shout"

class Human
{
	private:
		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
		void	intimidatingShout(std::string const & target);

	public:
		void	action(std::string const & action_name, std::string const & target);
};

typedef	void (Human::*function_ptr)(std::string const &);

# endif
