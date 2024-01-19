#include "Solution2.h"

#include <fstream>
#include <sstream>

#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    
    std::string filePath = "BankAccount/" + accountName + ".txt";

    
    std::ifstream file(filePath);

    if (!file.is_open())
    {
        throw std::runtime_error("File not found");
    }

    float balance = 0.0f;
    std::string line;

    while (std::getline(file, line))
    {
        std::istringstream iss(line);

        char operation;
        float amount;

        if (!(iss >> operation >> amount))
        {
            throw std::runtime_error("Error reading file");
        }

        if (operation == '+')
        {
            balance += amount;
        }
        else if (operation == '-')
        {
            balance -= amount;
        }
    }

    
    file.close();

    
    return balance;

	return -1.0f;
}

#endif
