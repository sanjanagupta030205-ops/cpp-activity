// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a class named Calculator.
// This class will contain overloaded functions for calculation.
class Calculator
{
public:

    // Create a function named add().
    // This version accepts two integer parameters.
    // It adds two integer numbers.
    int add(int a, int b)
    {
        // Return the sum of the two integer values.
        return a + b;
    }


    // Create another add() function.
    // This version accepts three integer parameters.
    // Having the same function name with different parameters
    // is called function overloading.
    int add(int a, int b, int c)
    {
        // Return the sum of the three integer values.
        return a + b + c;
    }


    // Create another add() function.
    // This version accepts two double parameters.
    // The parameter data type is different from the first add() function.
    double add(double a, double b)
    {
        // Return the sum of the two decimal values.
        return a + b;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create an object named calculator
    // from the Calculator class.
    Calculator calculator;


    // Call the add() function with two integers.
    // The compiler selects the version with two int parameters.
    int result1 = calculator.add(10, 20);


    // Call the add() function with three integers.
    // The compiler selects the version with three int parameters.
    int result2 = calculator.add(10, 20, 30);


    // Call the add() function with two double values.
    // The compiler selects the version with two double parameters.
    double result3 = calculator.add(10.5, 20.5);


    // Display the result of adding two integers.
    cout << "Addition of two integers: " << result1 << endl;


    // Display the result of adding three integers.
    cout << "Addition of three integers: " << result2 << endl;


    // Display the result of adding two decimal numbers.
    cout << "Addition of two decimal numbers: " << result3 << endl;


    // Return 0 to indicate successful completion of the program.
    return 0;
}