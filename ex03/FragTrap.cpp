#include "FragTrap.hpp"

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << "FragTrap " << this->_name << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif


/* ------------------------------- CONSTRUCTOR ------------------------------ */

FragTrap::FragTrap() : ClapTrap()
{
	LOG( this->_name << " is born with FragTrap brain!" );
	this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name)
{
	LOG( this->_name << " is born with FragTrap brain!" );
	// *this = FragTrap(); // lol
	this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap()
{
	LOG( this->_name << " gets cloned with FragTrap brain!" );
	DEBUG( "FragTrap copy constructor" );
	*this = src;
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

FragTrap::~FragTrap()
{
	LOG( this->_name << " is dead with FragTrap brain!" );
	DEBUG( "FragTrap copy destructor" );
}

/* -------------------------------- OVERLOAD -------------------------------- */

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}


/* -------------------------------- METHODS --------------------------------- */

void	FragTrap::highFivesGuys(void)
{
	DEBUG("highFivesGuys method called in ScapTrap.");

	if (this->_EnergyPoints == 0)
		PRINT(" not enought energy points.");
	else if (this->_hitPoints == 0)
		PRINT(" cannot perform an action while dead.  ");
	else
		PRINT(" does a high five with all these friends!");
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */