/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:52:01 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/15 16:43:42 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/*
static int	find_args_no(const char *fstr)
{
	const char	*ptr2pct;
	int	no_pct;

	no_pct = 0;
	ptr2pct = fstr;
	while (*(fstr++))
	{
		ptr2pct = ft_strchr(fstr, '%');
		if (ptr2pct != NULL)
		{
			no_pct++;
		}
		else
			break;
	}
	return (no_pct);
}
*/
static int check_fstr(const char **fstr, va_list arg_lists, int *no_printed)
{
	if (**fstr == '%')
	{
		if (*(*fstr + 1) == 'c')
		{
			ft_putchar_fd(va_arg(arg_lists, int), 1);
			*fstr += 2;
			return ((*no_printed)++);
		}
		if (*(*fstr + 1) == 's')
		{
			*fstr += 2;
			return(*no_printed += ft_putstr_fd_ret(va_arg(arg_lists, char *), 1));
		}
		if (*(*fstr + 1) == 'd' || *(*fstr + 1) == 'i')
		{
			*fstr += 2;
			return(*no_printed += ft_putnbr_fd_ret(va_arg(arg_lists, int), 1));
		}
		if (*(*fstr + 1) == 'x' || *(*fstr + 1) == 'X')
		{
			*fstr += 2;
			return(*no_printed += ft_puthex_fd_ret(va_arg(arg_lists, int), 1, (*(*fstr - 1) >= 'x')));
		}
		if (*(*fstr + 1) == 'p')
		{
			*fstr += 2;
			return(*no_printed += ft_putptr_fd_ret(va_arg(arg_lists, void *), 1));
		}
		if (*(*fstr + 1) == 'u')
		{
			*fstr += 2;
			return(*no_printed += ft_putunbr_fd_ret(va_arg(arg_lists, unsigned int), 1));
		}
		if (*(*fstr + 1) == '%')
		{
			*fstr += 1;
			return(0);
//			ft_putchar_fd('%', 1);
//			return((*no_printed)++);
		}
	}
	return (0);
}

int	ft_printf(const char *fstr, ...)
{
	va_list	arg_lists;
//	int	args_no;
	int no_printed;

	va_start(arg_lists, fstr);
	no_printed = 0;
	while (*fstr)
	{
		if (!check_fstr(&fstr, arg_lists, &no_printed))
		{
			if (!(*fstr))
				break;
			ft_putchar_fd(*(fstr),1);
			fstr++;
			no_printed++;
		}
	}
	va_end(arg_lists);
	return (no_printed);
}
