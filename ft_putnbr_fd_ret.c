/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:54:35 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/11 13:57:57 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	put_out(int fd, char *str, int len)
{
	int	i;

	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			write(fd, (str + len - 1 - i), 1);
			i++;
		}
	}
}

int	ft_putnbr_fd_ret(int n, int fd)
{
	char		str[20];
	int			i;
	long int	nn;

	i = 0;
	while (i < 20)
		str[i++] = '\0';
	nn = (long) n;
	i = 0;
	if (nn == 0)
		str[i++] = '0';
	else
	{
		while (nn != 0 && i < 20)
		{
			if (nn > 0)
				str[i++] = nn % 10 + '0';
			else
				str[i++] = -nn % 10 + '0';
			nn = nn / 10;
		}
		if (n < 0)
			str[i++] = '-';
	}
	put_out(fd, str, i);
	return (i);
}
