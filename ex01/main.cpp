#include "ScavTrap.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main()
{
	MAIN_LOG("Initialize");
	ScavTrap a("Dinklebot");
	ScavTrap c;
	{
		MAIN_LOG("Test inherit");
		ScavTrap *d = new ScavTrap("Henry");
		ClapTrap e = *d;
		e.takeDamage(1);
		ScavTrap b(a);

		b.takeDamage(1000);
		b.beRepaired(1);
		delete d;
	}
	c.beRepaired(1);

	MAIN_LOG("A loosing 10 energy and C goind to die");
	for (int i = 10; i; i--)
	{
		a.attack("Bob");
		c.takeDamage(10);
	}
	MAIN_LOG("Test if C can still do action when dead");
	a.attack("Bob");
	c.beRepaired(1);
	c.takeDamage(2);
	c.takeDamage(1);
	c.guardGate();
}