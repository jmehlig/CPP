# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 19:35:57 by jmehlig           #+#    #+#              #
#    Updated: 2022/06/20 20:48:11 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Accounts

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	Account.cpp \
		tests.cpp

$(NAME): *.cpp
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
