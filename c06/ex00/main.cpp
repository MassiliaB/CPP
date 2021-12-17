# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <string.h>

int	ft_strlen(std::string str)
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

int	ft_atoi(std::string str)
{
	int i;
	int ret;
	int neg;

	i = 0;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i] == '-')
			neg = -1;
	}
	ret = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * neg);
}

long double	ft_pow(long double n, int pow)
{
	long double	ret;

	if (pow == 0)
		return (1);
	ret = 1;
	while (pow)
	{
		ret *= n;
		pow--;
	}
	return (ret);
}

double	ft_atof(std::string str)
{
	int i;
	double ret;
	int neg;

	i = 0;
	neg = 1;
	while (str[i] && str[i] != '.')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	if (str[i] == '.')
		i++;
	ret = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret += (str[i] - 48) / ft_pow(10, 1);
		i++;
	}
	ret += (double)ft_atoi(str);
	return (ret * neg);
}

int	not_funny(std::string str)
{
	if (str == "-inff" || str == "+ inff" || str == "nanf"
		|| str == "-inf" || str == "+ inf" || str == "nan")
		return (1);
	return (0);
}

int is_char(std::string str)
{
	if (((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
		&& ft_strlen(str) == 1)
			return (1);
	return (0);
}

int is_digit(std::string str)
{
	for (int i = 0; str[i]; i++)
		if ((str[i] != '.' && str[i] != 'f' && str[i] != '+')
		&& (str[i] < 48 || str[i] > 57))
			return (0);
	return (1);
}

int is_digit_neg(std::string str)
{
	for (int i = 0; str[i]; i++)
		if ((str[i] != '-' && str[i] != '+' && str[i] != '.' && str[i] != 'f') && (str[i] < 48 || str[i] > 57))
			return (0);
	return (1);
}

int are_displayable(std::string str)
{
	if (!str[0])
		return (0);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < 33 || str[i] > 126)
			return (0);
	}
	return (1);
}

int to_int(std::string str, double num)
{
	std::cout << "int: ";
	if (not_funny(str) || (num > 2147483647 || num < -2147483648))
		return (error(1));
	if (!is_digit_neg(str))
		return (error(0));
	std::cout << static_cast<int>(num) << std::endl;
	return (1);
}

int to_double(std::string str, double num)
{
	std::string point;

	std::cout << "double: ";
	if (!is_digit_neg(str))
		return (error(0));
	if (num > 2.22507e-308 || num < 2.22507e-308)
		return (error(1));
	int i = 0;
	for (; str[i] != 'f'; i++)
		;
	if (str[i] == 'f')
		str[i] = 0;
	if (not_funny(str) && (str == "-inf" || str == "+ inf" || str == "nan"))
		std::cout << str;
	else if (not_funny(str))
		std::cout << str;
	else
		std::cout << static_cast<float>(num);
	i = 0;
	for (; str[i] != '.'; i++)
		;
	if (str[i] == '.' && str[i + 1] == '0' && !str[i + 2])
		std::cout << ".0";
	std::cout << std::endl;
	return (1);
}

int to_float(std::string str, double num)
{
	std::cout << "float: ";
	if (!is_digit_neg(str))
		return (error(0));
	if (num > 3.40282e+038 || num < 1.17549e-038)
		return (error(1));
	if (not_funny(str))
	{
		if (str == "-inff" || str == "+ inff" || str == "nanf")
			std::cout << str;
		else
			std::cout << str << "f";
		std::cout << std::endl;
		return (1);
	}
	else
		std::cout << static_cast<float>(num);
	int i = 0;
	for (; str[i] != '.'; i++)
		;
	if (str[i] == '.' && str[i + 1] == '0' && !str[i + 2])
		std::cout << ".0";
	std::cout << "f";
	std::cout << std::endl;
	return (1);
}

int	to_char(std::string str)
{
	int		convert;

	convert = ft_atoi(str);
	std::cout << "char: ";
	if (not_funny(str) || (!is_char(str) && !is_digit(str)))
		return (error(1));
	if (is_digit(str) && (convert < 33 || convert > 126))
		return (error(0));
	else if (is_char(str))
		std::cout << '\'' << str << '\'' << std::endl;
	else if (is_digit(str))
		std::cout << '\'' << static_cast<char>(convert) << '\'' << std::endl;
	return (0);
}

int main( int ac, char **av )
{
	if (ac == 2)
	{
		double num = ft_atof(av[1]);
		if (!are_displayable(av[1]))
			return (error(2));
		if (are_displayable(av[1]))
			if (!is_digit_neg(av[1]) && !is_char(av[1]) && !not_funny(av[1]))
				if (ft_strlen(av[1]) > 1)
					return (error(2));
		to_char(av[1]);
		to_int(av[1], num);
		to_double(av[1], num);
		to_float(av[1], num);
	}
	return (0);
}