NAME = megaphone

FLAG = -Wall -Wextra -Werror

FILE = megaphone.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	@clang++ $(FLAG) -c $(FILE)
	@clang++ $(FILE_OBJ) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all