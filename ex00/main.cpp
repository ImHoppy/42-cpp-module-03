#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap c;
	{
		ClapTrap b(a);
		b.takeDamage(100);
		b.beRepaired(1);
	}
	c.beRepaired(1);

	for (int i = 10; i; i--)
	{
		a.attack("Bob");
		c.takeDamage(1);
	}
	a.attack("Bob");
	c.beRepaired(1);
	c.takeDamage(2);
	c.takeDamage(1);
}