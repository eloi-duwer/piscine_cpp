/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 00:26:23 by eduwer            #+#    #+#             */
/*   Updated: 2018/04/04 00:28:13 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base {

	A( void );
	A( A const &src);
	virtual ~A( void );

	A &operator=( A const &src );

};

# endif
