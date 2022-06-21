#include "ClapTrap.hpp"

#ifdef DEBUG
	#define LOG(A) std::cout << "\033[3m" << A << "\033[0m" << std::endl 
#else
	#define LOG(A)
#endif

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(): _name("CL4P-TP"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	LOG(this->_name << " is born!");
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	LOG(this->_name << " gets cloned!");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	LOG(this->_name << " is dead!");
}



/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
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

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string & target)
{
	if (this->_EnergyPoints == 0 || this->_hitPoints == 0)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_hitPoints)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints == 0)
		return ;
	this->_hitPoints += amount;
	this->_EnergyPoints--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */