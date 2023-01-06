# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 18:09:15 by jmehlig           #+#    #+#              #
#    Updated: 2022/08/16 19:22:45 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \

OBJ = $(SRCS:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re