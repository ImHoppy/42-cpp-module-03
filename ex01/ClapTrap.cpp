#include "ClapTrap.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(): _name("CL4P-TP"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	LOG( this->_name << " is born!" );
}

ClapTrap::ClapTrap( std::string const & name )
{
	this->_name = name;
	LOG( this->_name << " is born!" );
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	LOG( this->_name << " gets cloned!" );
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	LOG( this->_name << " is dead!");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	DEBUG("Copy assignation operator called.");
	if ( this != &rhs )
	{ 
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string & target)
{
	DEBUG("attack method called.");

	if (this->_EnergyPoints == 0)
		PRINT(" not enought energy points.");
	else if (this->_hitPoints == 0)
		PRINT("  cannot perform an action while dead.  ");
	else {
		PRINT(" attacks " << target << ", causing " << this->_AttackDamage << " points of damage!");
		this->_EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	DEBUG("takeDamage method called.");

	if (this->_hitPoints == 0)
	{
		PRINT(" cannot perform an action while dead.");
		return ;
	}
	if (amount < this->_hitPoints)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	PRINT(" loses " << amount << " hit points.");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	DEBUG("beRepaired method called.");
	
	if (this->_EnergyPoints == 0)
		PRINT(" does not have enough energy points to perform an action.");
	else if (this->_hitPoints == 0)
		PRINT(" cannot perform an action while dead.");
	else {
		this->_hitPoints += amount;
		this->_EnergyPoints--;
		PRINT(" gets healed by " << amount << " hit points.");
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */