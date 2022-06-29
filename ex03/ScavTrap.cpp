#include "ScavTrap.hpp"

#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl
#define PRINT(A) std::cout << "\033[1m" << "ScavTrap " << this->_name << A << "\033[0m" << std::endl

#ifdef DEBUG_LOG
	#define DEBUG(A) LOG(A)
#else
	#define DEBUG(A)
#endif


/* ------------------------------- CONSTRUCTOR ------------------------------ */

ScavTrap::ScavTrap() : ClapTrap()
{
	LOG( this->_name << " is born with ScavTrap brain!" );
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	LOG( this->_name << " is born with ScavTrap brain!" );
	// *this = ScavTrap(); // lol
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap()
{
	LOG( this->_name << " gets cloned with ScavTrap brain!" );
	DEBUG( "ScavTrap copy constructor" );
	*this = src;
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

ScavTrap::~ScavTrap()
{
	LOG( this->_name << " is dead with ScavTrap brain!" );
}

/* -------------------------------- OVERLOAD -------------------------------- */

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

void	ScavTrap::guardGate(void)
{
	DEBUG("guardGate method called in ScavTrap.");

	if (this->_EnergyPoints == 0)
		PRINT(" not enought energy points.");
	else if (this->_hitPoints == 0)
		PRINT("  cannot perform an action while dead.  ");
	else
		PRINT(" becomes the gatekeeper.");
}

void	ScavTrap::attack(const std::string &target)
{
	DEBUG("attack method called in ScavTrap.");

	if (this->_EnergyPoints == 0)
		PRINT(" not enought energy points.");
	else if (this->_hitPoints == 0)
		PRINT(" cannot perform an action while dead.");
	else {
		PRINT(" attacks " << target << " with his fists, causing " << this->_AttackDamage << " points of damage!");
		this->_EnergyPoints--;
	}
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */