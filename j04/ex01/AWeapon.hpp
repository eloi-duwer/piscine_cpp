#ifndef _AWEAPON_HPP_
# define _AWEAPON_HPP_

#include <string>

class AWeapon {

	private:
		std::string	_name;
		int		_damage;
		int		_apCost;

	public:
		AWeapon(std::string const &name="Standart rifle", int damage=5, int apCost=2);
		AWeapon( AWeapon const &src );
		virtual ~AWeapon( void );
		std::string	getName( void ) const;
		int		getAPCost( void ) const;
		int		getDamage( void ) const;
		virtual void		attack( void ) const = 0;

		AWeapon	&operator=( AWeapon &src );

};

# endif
