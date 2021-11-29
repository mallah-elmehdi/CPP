NAME = zombie

FLAG = -Wall -Wextra -Werror

FILE = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	@clang++ $(FLAG) $(FILE) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all