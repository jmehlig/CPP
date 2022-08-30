# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 16:48:35 by jmehlig           #+#    #+#              #
#    Updated: 2022/08/29 18:07:11 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		Array.tpp \

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