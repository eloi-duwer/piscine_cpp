/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:50:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 19:13:08 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

#include <string>
#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );

	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif
