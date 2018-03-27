/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:50:06 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 19:02:33 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

#include <string>
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );
		void	attack( void );

	private:
		std::string	_name;
		Weapon		&_weapon;

};

#endif
