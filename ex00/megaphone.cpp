/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masboula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:43:35 by masboula          #+#    #+#             */
/*   Updated: 2021/09/27 14:43:42 by masboula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char *av[])
{
	char	*str;
	int		i;
	int		j;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
		{
			std::string str = av[i];
			j = -1;
			while (str[++j])
			{
				if (str[j] >= 97 && str[j] <= 122)
					str[j] = str[j] - 32;
			}
			std::cout << str << ' ';
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
