#ifndef _SUPERMUTANT_HPP_
# define _SUPERMUTANT_HPP_

#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

	public:
		SuperMutant( void );
		SuperMutant( SuperMutant const &src );
		~SuperMutant( void );
		virtual void	takeDamage( int dmg );

};

# endif
