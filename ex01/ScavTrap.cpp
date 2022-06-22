#include "ScavTrap.hpp"

/* ------------------------------- CONSTRUCTOR ------------------------------ */

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	// *this = ScavTrap(); // lol
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	DEBUG( "ScavTrap copy constructor" );
	*this = src;
}

/* ------------------------------- DESTRUCTOR ------------------------------- */

ScavTrap::~ScavTrap()
{
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
	PRINT(" becomes the gatekeeper.");
}

/* -------------------------------- ACCESSOR -------------------------------- */


/* ************************************************************************** */