/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/30 22:27:32 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

#include <string>
#include <ostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

	public:
		NinjaTrap( std::string name="Dark-Sasuke ninja" ); 
		NinjaTrap( NinjaTrap &src );
		~NinjaTrap( void );

		NinjaTrap &operator=( NinjaTrap const &src );

		virtual void	ninjaShoebox( ClapTrap	&target );
		virtual void	ninjaShoebox( FragTrap	&target );
		virtual void	ninjaShoebox( ScavTrap	&target );
		virtual void	ninjaShoebox( NinjaTrap	&target );
};

#endif
