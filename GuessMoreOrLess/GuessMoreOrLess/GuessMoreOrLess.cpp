// GuessMoreOrLess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//   Here is our comment for code
// comments should be started with double slash

#include <iostream>
#include <cstdlib> // to use rand and srand function
#include <ctime> // we need to use time related functions

int main()
{
    std::cout << "How do you do? \" " << std::endl << "let's play!" << std::endl;

    // here I am declaring a variable of integer type
    // and set initial value of it as 1
    int returnValueFromMain = 1;
//    std::cout << "Initially value is: " << variableOfIntegerType << std::endl;
//    std::cin >> variableOfIntegerType;
//    std::cout << "now the value is: " << variableOfIntegerType << std::endl;

    srand( (unsigned)time(0) );
    int randomNumber;
    randomNumber = (rand() % 10) + 1; // here we will get a value from 1 to 10 randomly
    std::cout << "random number " << randomNumber << " was generated \n";

    int guessedValue = -34876;
//    unsigned, int, char, short, return, void
    bool logicVariable = true; // false and true
    while (logicVariable)
    {

        std::cin >> guessedValue;


        // randomNumber could have negative and positive value in quite big range
        if (randomNumber == guessedValue)
        {
            std::cout << "You are Right!" << std::endl;
            logicVariable = false;
        }
        else
        {
            // > greater
            // < less
            // ==  equal
            // !=  no equal
            // >=  greater or equal
            // <= less or equal
            if (randomNumber > guessedValue)
            {
                std::cout << "Your value is smaller\n";
            }
            else
            {
                std::cout << "Your value is greater\n";
            }
        }
    } // while loop end

    return returnValueFromMain;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
