NAME = brainiacs
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g
SRCS = Animals/Animal.cpp Animals/Dog.cpp Animals/Cat.cpp \
Brain/Brain.cpp \
main.cpp \

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re