#include "DiamondTrap.hpp"

void DiamondTrap::createName(std::string name )
{
	this->_name = name;
	return;
}

int main(void)
{
	DiamondTrap    	mrRobot("Mr Robot");
	unsigned int	energy;
	unsigned int	damage;
	unsigned int	stop;

	energy = 0;
	damage = 0;
	stop = 0;
	srand(time(NULL));
	while (energy < mrRobot.getEnergy())
	{
		mrRobot.attack("EVIL CORP"); //scav
		usleep(10000 * 50);
	
		damage = rand() % ((mrRobot.getHitpoints() / 2) + 1);
		mrRobot.takeDamage(damage);
		stop += damage;
		if (stop >= mrRobot.getHitpoints())
		{
			mrRobot.guardGate();
			std::cout << "\x1B[31m" << "THE END OF EVIL CORP" << "\033[0m"<< std::endl;
			mrRobot.highFivesGuys();
			break ;
		}
		usleep(10000 * 70);
		mrRobot.beRepaired(damage);
		usleep(10000 * 50);
		energy++;
	}
	std::cout << "\x1B[31m" << "WHO are you ?" << "\033[0m"<< std::endl;
	mrRobot.whoAmI();
	return (0);
}
