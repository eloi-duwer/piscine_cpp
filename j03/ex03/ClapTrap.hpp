/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/30 22:11:46 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

#include <string>

class ClapTrap {

	public:
		ClapTrap( std::string name="CL4P-TP",
			int hp = 100,
			int maxHp = 100,
			int level = 1,
			int meleeAttackDmg = 10,
			int rangedAttackDmg = 10,
			int armorReduction = 1,
			int energy = 50,
			int maxEnergy = 50);
		ClapTrap( ClapTrap &src );
		~ClapTrap( void );
		ClapTrap &operator=( ClapTrap const &src );

		void	rangedAttack( std::string const &target );
		void	meleeAttack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	protected:
		int		_hp;
		int		_maxHp;
		int		_level;
		std::string	_name;
		int		_meleeAttackDmg;
		int		_rangedAttackDmg;
		int		_armorReduction;
		int		_energy;
		int		_maxEnergy;

};

#endif
