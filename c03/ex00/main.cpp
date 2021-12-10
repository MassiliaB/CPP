#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap		mrRobot("MR ROBOT");
	ClapTrap		evilCorp("EVIL CORP");

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