#ifndef _SORCERER_HPP_
# define _SORCERER_HPP_

#include <string>
#include <ostream>
#include "Victim.hpp"

class Sorcerer {

	public:
		Sorcerer( std::string const &name="Gandalf", std::string const &title="The Grey" );
		Sorcerer( Sorcerer const &src );
		~Sorcerer( void );

		Sorcerer 	&operator=( Sorcerer const &src );
		std::string	const &getName( void ) const ;
		std::string	const &getTitle( void ) const ;
		void		polymorph( Victim const &victim ) const;

	private:
		std::string _name;
		std::string _title;

};

std::ostream	&operator<<( std::ostream &o, Sorcerer &sorcerer );

# endif
