/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 00:26:23 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/04 00:35:31 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base {

	C( void );
	C( C const &src);
	virtual ~C( void );

	C &operator=( C const &src );

};

# endif
