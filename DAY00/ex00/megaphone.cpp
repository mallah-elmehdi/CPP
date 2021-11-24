#include <iostream>
#include <cctype>

char	*ft_to_upper_case_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (size_t i = 1; av[i]; i++)
			std::cout << ft_to_upper_case_str(av[i]);
		std::cout << "\n";
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}