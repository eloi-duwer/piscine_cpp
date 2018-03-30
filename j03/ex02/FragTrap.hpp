/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 13:59:41 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include <string>
#include <ostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap( std::string name="FR4G-TP" ); 
		FragTrap( FragTrap &src );
		~FragTrap( void );

		FragTrap &operator=( FragTrap const &src );
	
		void	vaulthunter_dot_exe(std::string const &target);

	private:
		static std::string	_vaulthunterAttacks[5];
};

#endif
