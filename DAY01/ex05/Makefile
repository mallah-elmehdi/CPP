NAME = Karen

FLAG = -Wall -Wextra -Werror

FILE = main.cpp Karen.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	@clang++ $(FLAG) $(FILE) -o $(NAME)
	#@g++ $(FLAG) $(FILE) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all