NAME = bureaucrat

FLAG = -Wall -Wextra -Werror

FILE = main.cpp Bureaucrat.cpp

FILE_OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME): $(FILE)
	@clang++ -std=c++98 $(FLAG) $(FILE) -o $(NAME)

clean:
	@rm -fr $(FILE_OBJ)

fclean: clean
	@rm -fr $(NAME)

re: fclean all
