/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:50:49 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 18:19:28 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {

	public:
		Human( void );
		~Human( void );
		const Brain			&getBrain( void );
		std::string		identify( void );

	private:
		const Brain _brain;
		const Brain &_brainRef;

};

# endif
