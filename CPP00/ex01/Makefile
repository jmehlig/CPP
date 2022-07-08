# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 11:58:51 by jmehlig           #+#    #+#              #
#    Updated: 2022/06/20 18:25:02 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	PhoneBook.cpp \
		main.cpp \
		Contact.cpp \


$(NAME): *.cpp
	$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
