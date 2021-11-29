NAME = unnecessaryViolence

FLAG = -Wall -Wextra -Werror

FILE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	# @clang++ $(FLAG) $(FILE) -o $(NAME)
	@g++ $(FLAG) $(FILE) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all