/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:38:29 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:30:20 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <iostream>

class Zombie {

	public:
		Zombie( std::string name, std::string type);
		~Zombie( void );
		void	announce( void ) const;
	private:
		std::string _name;
		std::string _type;

};

# endif
