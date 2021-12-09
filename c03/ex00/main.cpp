#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap    	mrRobot("MR ROBOT");
	unsigned int	energy;
	unsigned int	damage;
	unsigned int	stop;

	energy = 0;
	damage = 0;
	stop = 0;
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
			break ;
		}
		usleep(10000 * 70);
	
		mrRobot.beRepaired(damage);
		usleep(10000 * 50);
		energy++;
	}
	return (0);
}