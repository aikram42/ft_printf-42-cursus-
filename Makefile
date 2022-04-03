# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aikram <aikram@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:13:23 by aikram            #+#    #+#              #
#    Updated: 2022/03/21 03:49:45 by aikram           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = libft.a

GCCF = gcc -Wall -Wextra -Werror
LIB = ar -rcs
RM = rm -rf

SRCS =		pringles.c amougus.c humongous.c
			
OBJS = $(SRCS:.c=.o)

TEST = tests/main.c

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(LIB) $(NAME) $(OBJS)

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) $(NAME)

.c.o:
	$(GCCF) -c $< -o $(<:.c=.o)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(LIBFT_DIR)/$(LIBFT)
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re test norm