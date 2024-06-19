NAME = polymorphisme
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS = Animals/Animal.cpp Animals/Dog.cpp Animals/Cat.cpp \
WrongAnimals/WrongAnimal.cpp WrongAnimals/WrongCat.cpp \
main.cpp \

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re