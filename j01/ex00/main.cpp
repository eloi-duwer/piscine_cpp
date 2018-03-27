/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:24:08 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/27 15:36:39 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap( int weight ) {
	Pony *pony = new Pony(weight);
	pony->runAround(40);
	pony->eatGrass(100);
	delete pony;
}

void	ponyOnTheStack( int weight ) {
	Pony pony(weight);
	pony.eatGrass(20);
	pony.runAround(40);
}

int main( void ) {
	ponyOnTheHeap(100);
	ponyOnTheStack(50);
	Pony *pony = new Pony(200);
	pony->runAround(170);
	pony->eatGrass(130);
	delete pony;
	return 0;
}
