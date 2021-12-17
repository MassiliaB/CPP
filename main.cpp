# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <string.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	error( int erno )
{
	if (erno == 0)
		std::cout << "Non displayable\n";
	else if (erno == 1)
		std::cout << "impossible\n";
	else if (erno == 2)
		std::cout << "Unknow type\n";
	return (0);
}

int	not_funny(std::string str)
{
	if (str == "-inff" || str == "+ inff" || str == "nanf"
		|| str == "-inf" || str == "+ inf" || str == "nan")
		return (1);
	return (0);
}

int is_char(char *str)
{
	if (((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
		&& ft_strlen(str) == 1)
			return (1);
	return (0);
}

int is_displayable(double num)
{
	char c;
	c = static_cast<char>num;
	if ((c >= 33 && c <= 126))
		return (1);
	return (0);
}

int are_displayable(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < 33 || str[i] > 126)
			return (0);
	}
	for (int i = 0; ((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122)) ; i++)
	{
		if (i > 1)
			return (0);
		i++;
	}
	return (1);
}

int to_int(char *str)
{
	int n;

	n = std::atoi(str);
	std::cout << "int: ";
	if (not_funny(str))
		return (error(1));
	std::cout << (int)n << std::endl;
	return (1);
}

int to_double(double num)
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << (double)num << std::endl;
	return (1);
}

int to_float(double num)
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << (float)num << "f" << std::endl;
	return (1);
}

int	to_char(char *str, double num)
{
	std::cout << "char: ";
	if (is_displayable(num))
		std::cout << '\'' << static_cast<int>(*str) << '\'' << std::endl;
	else
	{
		if (not_funny(str))
			return (error(1));
		if (!isprint((char)num))
			return (error(0));
		std::cout << '\'' << (char)num << '\'' << std::endl;
	}
	return (0);
}

int main( int ac, char **av )
{
	if (ac == 2)
	{
		double num = strtod(av[1], NULL);
		if (!not_funny(av[1]) && !are_displayable(av[1]))
			return (error(2));
		to_char(av[1], num);
		to_int(av[1]);
		to_float(num);
		to_double(num);
	}
	return (0);
}