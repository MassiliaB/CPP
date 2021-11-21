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
	if (str == "-inff" || str == "+inff" || str == "nanf"
		|| str == "-inf" || str == "+inf" || str == "nan")
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

int check_scalar(char *str)
{
	int p;

	p = 0;
	if (is_char(str))
		return (1);
	if (not_funny(str))
		return (1);
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			if ((str[i] == '-' || str[i] == '+') && i == 0 && i + 1 != ft_strlen(str))
				continue;
			else if (str[i] == '.' && i != 0 && p == 0)
				p++;
			else if (str[i] == 'f' && i == ft_strlen(str) - 1)
				continue;
			else
				return (0);
		}
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
	if (is_char(str))
		std::cout << '\'' << str << '\'' << std::endl;
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
	int scalar;

	if (ac == 2)
	{
		double num = strtod(av[1], NULL);
		if (!(scalar = check_scalar(av[1])))
			return (error(2));
		to_char(av[1], num);
		to_int(av[1]);
		to_float(num);
		to_double(num);
	}
	return (0);
}