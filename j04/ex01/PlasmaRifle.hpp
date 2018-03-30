#ifndef _PLASMA_RIFLE_HPP_
# define _PLASMA_RIFLE_HPP_

#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle( void );
		PlasmaRifle ( PlasmaRifle const &src );
		~PlasmaRifle ( void );

		virtual void	attack( void ) const;

};

# endif
