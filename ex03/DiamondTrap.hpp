#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string const & src );
		DiamondTrap( ClapTrap::_name _clap_name );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

	private:
		std::string		_name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* DIAMONDTRAP_H */