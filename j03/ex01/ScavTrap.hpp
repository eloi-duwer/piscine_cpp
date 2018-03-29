/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 13:59:41 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include <string>
#include <ostream>

class ScavTrap {

	public:
		ScavTrap( std::string name="SC4V-TP" ); //Default name. With this, there is no need to have 2 constructors. This superseed the default one (e.g ScavTrap( void ));
		ScavTrap( ScavTrap &src );
		~ScavTrap( void );

		ScavTrap &operator=( ScavTrap const &src );

		void	rangedAttack( std::string const &target );
		void	meleeAttack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	challengeNewcomer(std::string const &target);

	private:
		int			_hp;
		int			_maxHp;
		int			_energy;
		int			_maxEnergy;
		int			_level;
		std::string	_name;
		int			_meleeAttackDmg;
		int			_rangedAttackDmg;
		int			_armorReduction;
		static std::string	_scavTrapChallenges[5];
};

//std::ostream &operator<<( std::ostream &o, ScavTrap const &instance );

#endif
