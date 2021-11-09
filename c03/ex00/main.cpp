#include "ClapTrap.hpp"

void	ClapTrap::attack(std::string const & target)
{
	std::cout << this->_name << " attack " << target << ", ";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout  << "causing " << "\x1B[91m" << amount << "\033[0m" << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout  << this->_name << " earning " << "\x1B[32m" << amount << "\033[0m" << " points!"  << std::endl;
}

unsigned int	ClapTrap::getEnergy(void)
{
	return (this->_energypoints);
}

unsigned int	ClapTrap::getDamage(void)
{
	return (this->_attackdamage);
}

unsigned int	ClapTrap::getHitpoints(void)
{
	return (this->_hitpoints);
}

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
		mrRobot.attack("F*CK SOCIETY");
		usleep(10000 * 50);
	
		damage = rand() % ((mrRobot.getHitpoints() / 2) + 1);
		mrRobot.takeDamage(damage);
	
		stop += damage;
		if (stop >= mrRobot.getHitpoints())
		{
			std::cout << "\x1B[31m" << "THE END OF F*CK SOCIETY" << "\033[0m"<< std::endl;
			break ;
		}
		usleep(10000 * 70);
	
		mrRobot.beRepaired(damage);
		usleep(10000 * 50);
		energy++;
	}
	return (0);
}