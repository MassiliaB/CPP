# include "Contacts.hpp"
# include "Phonebook.hpp"

int	is_digit(std::string input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(std::string input)
{
	int	ret;
	int	i;

	i = 0;
	while (input[i] == '-' || input[i] == '+')
		i++;
	ret = 0;
	while (input[i] >= '0' && input[i] <= '9')
	{
		ret = ret * 10 + (input[i] - 48);
		i++;
	}
	return (ret);
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			i;

	i = 0;
	std::cout << "Please enter one of the following commands : ADD, EXIT or SEARCH\n";
	std::cout << "> ";
	while (std::getline(std::cin, input))
	{
		if ((i = phonebook.get_contacts(input, i)) == -1)
			break ;
		input.clear();
		std::cout << "Please enter one of the following commands : ADD, EXIT or SEARCH\n";
		std::cout << "> ";
	}
	return (0);
}