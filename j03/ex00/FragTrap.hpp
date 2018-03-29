/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduwer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:46:45 by eduwer            #+#    #+#             */
/*   Updated: 2018/03/29 13:59:41 by eduwer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include <string>
#include <ostream>

class FragTrap {

	typedef		void	(FragTrap::*attackType)(std::string const &);

	public:
		FragTrap( std::string name="CL4P-TP" ); //Default name. With this, there is no need to have 2 constructors. This superseed the default one (e.g FragTrap( void ));
		FragTrap( FragTrap &src );
		~FragTrap( void );

		FragTrap &operator=( FragTrap const &src );

		void	rangedAttack( std::string const &target );
		void	meleeAttack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	vaulthunter_dot_exe(std::string const &target);

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
		static std::string	_vaulthunterAttacks[5];
};

//std::ostream &operator<<( std::ostream &o, FragTrap const &instance );

#endif
