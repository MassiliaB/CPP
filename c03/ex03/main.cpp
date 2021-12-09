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
	std::cout << "\x1B[33m" << "At the begining :" << std::endl;
	std::cout << "-Hit points: "<< mrRobot.getHitpoints() << std::endl;
	std::cout << "-Energy points: " << mrRobot.getEnergy() << std::endl;
	std::cout << "-Damage points: " << mrRobot.getDamage() << "\033[0m" << std::endl;
	srand(time(NULL));
	while (energy < mrRobot.getEnergy())
	{
		mrRobot.attack("EVIL CORP"); 
		usleep(10000 * 10);
	
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
