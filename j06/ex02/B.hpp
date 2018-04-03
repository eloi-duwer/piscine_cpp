/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 00:26:23 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/04 00:35:00 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base {

	B( void );
	B( B const &src);
	virtual ~B( void );

	B &operator=( B const &src );

};

# endif
