#ifndef _RADSCORPION_HPP_
# define _RADSCORPION_HPP_

#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy {

	public:
		RadScorpion( void );
		RadScorpion( RadScorpion const &src );
		~RadScorpion( void );
		virtual void	takeDamage( int dmg );

};

# endif
