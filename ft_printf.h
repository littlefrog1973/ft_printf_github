/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:57:32 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/15 15:23:52 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(char const *fstr, ...);
int	ft_putnbr_fd_ret(int n, int fd);
int	ft_puthex_fd_ret(int n, int fd, int hexi);
int	ft_putptr_fd_ret(void *ptr, int fd);
int	ft_putunbr_fd_ret(unsigned int n, int fd);
int	ft_putstr_fd_ret(char *ptr, int fd);

#endif
