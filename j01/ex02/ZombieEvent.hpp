/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:47:43 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 16:29:55 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZombieEvent_HPP_
# define _ZombieEvent_HPP_

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType( std::string type );
		Zombie	*newZombie( std::string name ) const;
		void	randomChump( int nb_letters ) const;

	private:
		std::string _type;
};

# endif
