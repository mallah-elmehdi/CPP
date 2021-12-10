#include "Convert.hpp"

//bool isStringFloat(std::string string)
//{
//    float output;
//    std::stringstream stringStream(string);
//    stringStream >> output;
//    std::cout << output;
//    return stringStream.eof() && !stringStream.fail(); 
//}

//bool isStringInt(std::string string)
//{
//    int output;
//    std::stringstream stringStream(string);
//    stringStream >> output;
//    return stringStream.eof() && !stringStream.fail(); 
//}

//float stringToFloat(std::string string)
//{
//    float output;
//    std::stringstream stringStream(string);
//    stringStream >> output;
//    return output; 
//}

//int stringToInt(std::string string)
//{
//    int output;
//    std::stringstream stringStream(string);
//    stringStream >> output;
//    return output; 
//}

//bool    isStringAllDigit(std::string string)
//{
//    for (size_t i = 0; i < string.size(); i++)
//    {
//        if (!std::isdigit(string[i]))
//            return (false);
//    }
//    return (true);
//}

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw Convert::ArgumentException();
        Convert numberHolder(av[1]);
        //if (numberHolder)
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << '\n';
    }
    


    //isStringFloat(av[1]);
}