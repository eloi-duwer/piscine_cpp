/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:31:04 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 18:23:17 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <string>

class Brain {

	public:
		Brain( void );
		~Brain( void );
		std::string	identify( void ) const;
		int			getQI( void ) const;

	private:
		unsigned int	_QI;
		std::string		_numberOfNeurons;
};

# endif
