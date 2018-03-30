#ifndef _PEON_HPP_
# define _PEON_HPP_

#include "Victim.hpp"
#include <ostream>
#include <string>

class Peon : public Victim {

public:
	Peon( std::string const &name="Pierre-alexandre-louis-hubert");
	Peon( Peon const &src );
	~Peon( void );
	virtual void	getPolymorphed( void ) const;
	Peon	&operator=( Peon const &src );

};

# endif
