#include "ClapTrap.hpp"

#define MAIN_LOG(A) std::cout << "\033[3;35m" << A << "\033[0m" << std::endl

int main()
{
	MAIN_LOG("Initialize.");
	ClapTrap a;
	ClapTrap c;
	{
		ClapTrap b(a);
		b.takeDamage(100);
		b.beRepaired(1);
	}
	c.beRepaired(1);

	MAIN_LOG("A loosing all energy and C loosing all hp.");
	for (int i = 10; i; i--)
	{
		a.attack("Bob");
		c.takeDamage(1);
	}
	MAIN_LOG("Test if A can still do action without energy");
	a.attack("Bob");
	MAIN_LOG("Test if C can still do action when dead");
	c.beRepaired(1);
	c.takeDamage(2);
	c.takeDamage(1);
}