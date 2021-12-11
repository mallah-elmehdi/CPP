#include "Convert.hpp"

// * OTHER FUNCTIONS *

bool     isDigit(std::string stringValue)
{
   double doubleValue;
   std::stringstream stringStream(stringValue);
   
   stringStream >> doubleValue;
   return doubleValue != 0;
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

bool    check(std::string stringValue)
{
   bool hasDigit = false;
   bool hasAlpha = false;
   int hasMin = 0;
   int hasPlu = 0;
   int hasDot = 0;

   for (size_t i = 0; i < stringValue.size(); i++)
   {
      if (isdigit(stringValue[i]))
         hasDigit = true;
      else if (isalpha(stringValue[i]))
         hasAlpha = true;
      else if (stringValue[i] == '-')
         hasMin++;
      else if (stringValue[i] == '+')
         hasPlu++;
      else if (stringValue[i] == '.')
         hasDot++;
      else
         return (false);
   }
   if ((hasDigit && hasAlpha) || hasMin > 1 || hasPlu > 1 || hasDot > 1)
         return (false);
   return (true);
}