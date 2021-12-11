#include "Convert.hpp"

// * OTHER FUNCTIONS *

bool     isDigit(std::string stringValue)
{
   double doubleValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> doubleValue;
   return (!stringStream.fail());
}

double    toDouble(std::string stringValue)
{
   double doubleValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> doubleValue;
   return doubleValue;
}

int    toInt(std::string stringValue)
{
   int intValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> intValue;
   return intValue;
}

bool    find(std::string *stringList, std::string stringValue)
{
   for (size_t i = 0; i < 12; i++)
   {
      if (stringList[i] == stringValue)
         return (true);
   }
   return (false);
}