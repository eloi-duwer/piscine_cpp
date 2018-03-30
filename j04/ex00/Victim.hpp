#ifndef _VICTIM_HPP_
# define _VICTIM_HPP_

#include <string>
#include <ostream>

class Victim {

public:
	Victim(std::string const &name="Jean-eudes" );
	Victim( Victim const &src );
	virtual ~Victim( void );

	Victim		&operator=( Victim const &src );

	std::string const 	&getName( void ) const;
	virtual void		getPolymorphed( void ) const;


protected:
	std::string	_name;

};

std::ostream	&operator<<( std::ostream &o , Victim const &src);

#endif
