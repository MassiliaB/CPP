#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap    	mrRobot("MR ROBOT");
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
		usleep(10000 * 50);
	
		damage = rand() % ((mrRobot.getHitpoints() / 2) + 1);
		mrRobot.takeDamage(damage);
	
		stop += damage;
		if (stop >= mrRobot.getHitpoints())
		{
			std::cout << "\x1B[31m" << "THE END OF EVIL CORP" << "\033[0m"<< std::endl;
			mrRobot.guardGate();
			break ;
		}
		usleep(10000 * 70);
		mrRobot.beRepaired(damage);
		usleep(10000 * 50);
		energy++;
	}
	return (0);
}