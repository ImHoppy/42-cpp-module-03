#include "DiamondTrap.hpp"

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << "DiamondTrap " << this->_name << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif

/* ------------------------------- CONSTRUCTOR ------------------------------ */

DiamondTrap::DiamondTrap() : ClapTrap("Marvin_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = "Marvin";
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	// ClapTrap::operator=(src);
}

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

DiamondTrap::~DiamondTrap()
{
}

/* -------------------------------- OVERLOAD -------------------------------- */

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		ClapTrap::_name = rhs._name + "_clap_name";
		_name			= rhs._name;
		_hitPoints		= rhs._hitPoints;
		_EnergyPoints	= rhs._EnergyPoints;
		_AttackDamage	= rhs._AttackDamage;
	}
	return *this;
}

/* -------------------------------- METHODS --------------------------------- */

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\033[1m" << "DiamondTrap " << "My name is " << this->_name << "\033[0m" << std::endl;
	std::cout << "\033[1m" << "ClapTrap " << "My name is " << ClapTrap::_name << "\033[0m" << std::endl;
}



/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */