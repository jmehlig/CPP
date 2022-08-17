# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 21:41:50 by jmehlig           #+#    #+#              #
#    Updated: 2022/08/17 10:56:25 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \

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