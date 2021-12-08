#include <iostream>
#include <fstream>
#include <cctype>

std::string	ft_new_line(std::string line, std::string first_string, std::string second_string)
{
	std::string		new_line;
	size_t			match_index;

	new_line = "";
	match_index = line.find(first_string);
	if (match_index == std::string::npos)
		return (line);
	while (match_index != std::string::npos)
	{
		new_line.append(line, 0, match_index);
		new_line.append(second_string);
		line.erase(0, match_index + first_string.size());
		match_index = line.find(first_string);
	}
	new_line.append(line);
	return (new_line);
}

std::string	out_filename(std::string filename)
{
	for (size_t i = 0; i < filename.size(); i++)
		filename[i] = toupper(filename[i]);
	filename.append(".replace");
	return (filename);
}

int	ft_replace(std::string filename, std::string first_string, std::string second_string)
{
	std::fstream	stream_in;
	std::fstream	stream_out;
	std::string		line;

	stream_in.open(filename, std::fstream::in);
	
	if (stream_in.fail())
	{
		std::cout << "Error! file error..." << std::endl;
		return (EXIT_FAILURE);
	}
	stream_out.open(out_filename(filename), std::fstream::out | std::fstream::trunc);
	if (stream_out.fail())
	{
		std::cout << "Error! file error..." << std::endl;
		return (EXIT_FAILURE);
	}
	while (std::getline(stream_in, line))
	{
		stream_out << ft_new_line(line, first_string, second_string) << std::endl;
	}
	stream_in.close();
	stream_out.close();
	return (EXIT_SUCCESS);
}

int main(int ac, char **av)
{
	std::string filename;
	std::string first_string;
	std::string second_string;

	if (ac != 4)
	{
		std::cout << "Error! argument error..." << std::endl;
		return (EXIT_FAILURE);
	}
	filename = av[1];
	first_string = av[2];
	second_string = av[3];
	if (filename.size() == 0 || first_string.size() == 0 || second_string.size() == 0)
	{
		std::cout << "Error! empty string" << std::endl;
		return (EXIT_FAILURE);
	}
	return (ft_replace(filename, first_string, second_string));
}