/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quake_timers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baudiber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:04:39 by baudiber          #+#    #+#             */
/*   Updated: 2018/11/08 23:01:02 by baudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

void	exit_error(std::string str)
{
	std::cout << str << "\n";
	exit (0);
}

bool	ready(void)
{
	int		tries;
	char	y_or_n;

	tries = 0;
	std::cout << "WELCOME TO QUAKE TIMERS\n";
	std::cout << "type quit to quit\n";
	while (tries < 4)
	{
		std::cout << "ARE YOU READY? (y/n)\n";
		y_or_n = 0;
		std::cin >> y_or_n;
		switch (y_or_n)
		{
			case 'y':
				return true;
			case 'n':
				return false;
			default:
				std::cout << "NANI?\n";
				tries++;
		}
	}
	return false;
}

int		main(void)
{
	std::string	answer;
	int			minute;
	int			seconds;
	int			result;
	int			converted;

	if (!ready())
		exit_error("YOU ARE NOT PREPARED");
	srand(time(NULL));
	while (1)
	{
		minute = rand() % 10;
		seconds = rand() % 60;
		result = (seconds + 30) % 60;
		std::cout << minute << ":";
		if (seconds < 10)
			std::cout << "0";
	   	std::cout << seconds << " when is the next spawn?" << std::endl;
		std::cin >> answer;
		if (answer == "quit")
			break;
		std::stringstream ss(answer);
		ss >> converted;
		if (result != converted)
		{
			std::cout << "\033[33mWRONG! result was ";
			if (result < 10)
				std::cout << "0";
		   	std::cout << result <<"\n\033[0m";
		}
		else
			std::cout << "\033[32mCORRECT \033[0m\n";
		std::cout << std::endl;
	}
	return (0);
}
