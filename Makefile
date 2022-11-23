# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 12:25:01 by sdeeyien          #+#    #+#              #
#    Updated: 2022/11/23 01:25:04 by sdeeyien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Werror -Wextra

LIBDIR = libft

DEPS = ft_printf.h

SRC = ft_printf.c putnbr.c puthex.c putptr.c putunbr.c putstr.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJ)
	cd $(LIBDIR) && make all
	ar -rcs $@ $(OBJ) $(LIBDIR)/*.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bonus: $(OBJ)
	cd $(LIBDIR) && make all
	ar -rcs $@ $(OBJ) $(LIBDIR)/*.o

clean :
	rm -f *.o
	cd $(LIBDIR) && make clean

fclean : clean
	rm -f $(NAME)
	cd $(LIBDIR) && make fclean

re : fclean all

.PHONY : all clean fclean re
