/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:43:15 by vasargsy          #+#    #+#             */
/*   Updated: 2022/07/03 11:43:16 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			b *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10 + *str - '0';
		str++;
	}
	return (a * b);
}

void	send_message(int pid, char *str)
{
	int	b;
	int	i;

	i = -1;
	while (str[++i])
	{
		b = 128;
		while (b != 0)
		{
			if (str[i] & b)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			b = b >> 1;
		}
	}
}

int	main(int argc, char **argv)
{	
	if (argc == 3)
		send_message(ft_atoi(argv[1]), argv[2]);
}
