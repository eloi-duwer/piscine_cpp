#ifndef _POWER_FIST_HPP_
# define _POWER_FIST_HPP_

#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist( void );
		PowerFist ( PowerFist const &src );
		~PowerFist ( void );

		virtual void	attack( void ) const;

};

# endif
