#include <iostream>
#include <sstream>

// * OTHER FUNCTIONS *

bool    isDigit(std::string stringValue)
{
   double doubleValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> doubleValue;
//    std::cout << "[" << doubleValue << "]\n";
   return doubleValue != 0;
}

double    toDouble(std::string stringValue)
{
   double doubleValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> doubleValue;
   return doubleValue;
}

float    toFloat(std::string stringValue)
{
   float floatValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> floatValue;
   return floatValue;
}

int    toInt(std::string stringValue)
{
   int intValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> intValue;
   return intValue;
}