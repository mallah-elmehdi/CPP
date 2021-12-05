NAME = fragtrap

FLAG = -Wall -Wextra -Werror

FILE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	@clang++ -std=c++98 $(FLAG) $(FILE) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all
