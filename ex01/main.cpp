#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Dinklebot");
	ScavTrap c;
	{
		ScavTrap *d = new ScavTrap("Henry");
		ClapTrap e = *d;
		e.takeDamage(1);
		ScavTrap b(a);

		b.takeDamage(1000);
		b.beRepaired(1);
		delete d;
	}
	c.beRepaired(1);

	for (int i = 10; i; i--)
	{
		a.attack("Bob");
		c.takeDamage(10);
	}
	a.attack("Bob");
	c.beRepaired(1);
	c.takeDamage(2);
	c.takeDamage(1);
	c.guardGate();
}