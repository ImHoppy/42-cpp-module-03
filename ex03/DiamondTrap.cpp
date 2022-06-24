#include "DiamondTrap.hpp"

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << "DiamondTrap " << this->_name << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif

/* ------------------------------- CONSTRUCTOR ------------------------------ */

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	ClapTrap::operator=(src);
}

DiamondTrap::DiamondTrap( std::string const & name ) : ScavTrap(), FragTrap(name + "_clap_name")
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
		ClapTrap::operator=(rhs);
	}
	return *this;
}


/* -------------------------------- METHODS --------------------------------- */

void	DiamondTrap::whoAmI(void)
{
	
}



/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */