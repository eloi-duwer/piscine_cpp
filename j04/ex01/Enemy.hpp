#ifndef _ENEMY_HPP_
# define _ENEMY_HPP_

#include <string>

class Enemy {

	private:
		int		_hp;
		std::string	_type;
	
	public:
		Enemy(int hp=100, std::string const &type="Boring Human");
		Enemy( Enemy const &src );
		virtual ~Enemy( void );
		std::string	getType( void ) const;
		int		getHP( void ) const;

		virtual void	takeDamage( int dmg);

		Enemy &operator=(Enemy const &src );
};

# endif
