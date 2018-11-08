# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baudiber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 17:28:29 by baudiber          #+#    #+#              #
#    Updated: 2018/11/08 18:39:27 by baudiber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Quake_Timers

CC		=	g++

SRC		=	quake_timers.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)
	@echo "$(NAME) executable $(G)created$(W)."

run:
	@$(MAKE)
	@./$(NAME)

clean:
	@rm $(NAME)

re: clean
	@$(MAKE)
