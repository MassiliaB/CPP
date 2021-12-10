#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap    	mrRobot("MR ROBOT");
	ClapTrap    	evilCorp("EVIL CORP");

	srand(time(NULL));

	std::cout << "\x1B[33m" << "At the begining Mr Robot:" << std::endl;
	std::cout << "-Hit points: "<< mrRobot.getHitpoints() << std::endl;
	std::cout << "-Energy points: " << mrRobot.getEnergy() << std::endl;
	std::cout << "-Damage points: " << mrRobot.getDamage() << "\033[0m" << std::endl;
	std::cout << "\x1B[33m" << "At the begining EvilCorp:" << std::endl;
	std::cout << "-Hit points: "<< evilCorp.getHitpoints() << std::endl;
	std::cout << "-Energy points: " << evilCorp.getEnergy() << std::endl;
	std::cout << "-Damage points: " << evilCorp.getDamage() << "\033[0m" << std::endl;
	srand(time(NULL));
	while (1)
	{
		mrRobot.attack("EVIL CORP");
		evilCorp.takeDamage(mrRobot.getDamage());

		usleep(10000 * 10);

		evilCorp.attack("MR ROBOT");
		mrRobot.takeDamage(evilCorp.getDamage());
	
		if (evilCorp.getEnergy() <= 0){
			std::cout << "\x1B[31m" << "THE END OF EVIL CORP" << "\033[0m"<< std::endl;
			mrRobot.guardGate();
			break ;
		}
		if (mrRobot.getEnergy() <= 0){
			std::cout << "\x1B[31m" << "Oh noooo Mr Robot IS DEADDD" << "\033[0m"<< std::endl;	
			break ;
		}
		usleep(10000 * 10);
		mrRobot.beRepaired(mrRobot.getDamage());
		evilCorp.beRepaired(evilCorp.getDamage());
		usleep(10000 * 10);
	}
	return (0);
}
