/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 13:59:41 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include <string>
#include <ostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
		ScavTrap( std::string name="SC4V-TP" );
		ScavTrap( ScavTrap &src );
		~ScavTrap( void );

		ScavTrap &operator=( ScavTrap const &src );

		void	challengeNewcomer(std::string const &target);

	private:
		static std::string	_scavTrapChallenges[5];
};

#endif
