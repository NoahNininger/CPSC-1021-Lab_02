#include "validateUserInput.h"

bool validateUserInput(double userInput)  // function definition (input validation)
{
    if (userInput < 0)
        { return false; }   // returns false if 'userInput' is less than 0

    else
        { return true; }    // otherwise, returning true
}