#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string const & src );
		// DiamondTrap( ClapTrap::_name _clap_name );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		using ScavTrap::attack;
		void	whoAmI(void);

	public:
		std::string		_name;
		using FragTrap::_hitPoints;
		using ScavTrap::_EnergyPoints;
		using FragTrap::_AttackDamage;
};

#endif /* DIAMONDTRAP_H */