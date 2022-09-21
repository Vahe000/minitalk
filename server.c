/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <vasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:42:38 by vasargsy          #+#    #+#             */
/*   Updated: 2022/07/03 11:42:39 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		n += 48;
		write(1, &n, 1);
		return ;
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	put_message(int sig)
{
	static unsigned char	c = 0;
	static int				flag = 0;

	++flag;
	c = c << 1;
	if (sig == SIGUSR1)
		c = c | 1;
	if (flag == 8)
	{
		write(1, &c, 1);
		flag = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_handler = &put_message;
	pid = getpid();
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	write(1, "\nServer PID is ", 16);
	ft_putnbr(pid);
	write(1, "\n", 1);
	while (1)
		pause();
}
