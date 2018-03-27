/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:05:09 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 15:08:39 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

class Pony {

	public:

		void	eatGrass( int kilosOfGrass );
		void	runAround( int kilosLost );
		Pony( int weight );
		~Pony( void );

	private:
		int	_weight;

};

#endif
