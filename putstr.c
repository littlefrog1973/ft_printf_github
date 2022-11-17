/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:17:37 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/16 22:17:42 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"

int	putstr(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		return (ft_strlen(s));
	}
	else
	{
		write(fd, "(null)", sizeof("(null)") - 1);
		return (sizeof("(null)") - 1);
	}
}
