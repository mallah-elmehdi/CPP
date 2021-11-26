NAME = phoneBook

FLAG = -Wall -Wextra -Werror

FILE = main.cpp Contact.cpp PhoneBook.cpp addContact.cpp addContactUtil.cpp searchContact.cpp

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