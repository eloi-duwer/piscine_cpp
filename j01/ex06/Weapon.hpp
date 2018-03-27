/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:32:00 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 18:38:44 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <string>

class Weapon {

	public:
		Weapon( std::string str);
		~Weapon( void );
		void				setType( std::string type );
		const	std::string	&getType( void );

	private:
		std::string type;

};

#endif
