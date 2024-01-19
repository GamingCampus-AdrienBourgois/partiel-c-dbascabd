#include "Solution1.h"
#include <iostream>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
 {
    {
         switch (_from)
         {
         case TemperatureUnits::CELSIUS:
             switch (_to)
             {
             case TemperatureUnits::CELSIUS:
                 return _value;
             case TemperatureUnits::FAHRENHEIT:
                 return (_value * 9 / 5) + 32;
             case TemperatureUnits::KELVIN:
                 return _value + 273.15;
             }
             break;

         case TemperatureUnits::FAHRENHEIT:
             switch (_to)
             {
             case TemperatureUnits::CELSIUS:
                 return (_value - 32) * 5 / 9;
             case TemperatureUnits::FAHRENHEIT:
                 return _value;
             case TemperatureUnits::KELVIN:
                 return (_value - 32) * 5 / 9 + 273.15;
             }
             break;

         case TemperatureUnits::KELVIN:
             switch (_to)
             {
             case TemperatureUnits::CELSIUS:
                 return _value - 273.15;
             case TemperatureUnits::FAHRENHEIT:
                 return (_value - 273.15) * 9 / 5 + 32;
             case TemperatureUnits::KELVIN:
                 return _value;
             }
             break;
         }

        
        return 0.0f;
    }
 };
	return -1.0f;
}



#endif
