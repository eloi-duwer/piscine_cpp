/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:47:43 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 17:11:57 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde( int N );
		~ZombieHorde();
		void	announce( void );

	private:
		Zombie	*_zombies;
		int		_nbZombies;
};

# endif
