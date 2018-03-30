#ifndef _CHARACTER_
# define _CHARACTER_

#include <string>
#include <ostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"


class Character {

	private:
		AWeapon 	*_weapon;
		std::string	_name;
		int		_ap;

	public:
		Character(std::string const &name="Doomguy");
		Character( Character &src );
		~Character( void );

		Character &operator=(Character &src);

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName( void ) const;
		int		getAP( void ) const;
		AWeapon 	*getWeapon( void ) const;

};

std::ostream	&operator<<(std::ostream &o, Character &character);

# endif
