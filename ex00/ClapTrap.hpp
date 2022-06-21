#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap &		operator=( ClapTrap const & rhs );
		

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

#endif /* CLAPTRAP_H */