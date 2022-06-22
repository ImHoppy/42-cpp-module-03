#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << "ClapTrap " << this->_name << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif


class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( std::string const & name );
		virtual ~ClapTrap();

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap &		operator=( ClapTrap const & rhs );
		

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

#endif /* CLAPTRAP_H */