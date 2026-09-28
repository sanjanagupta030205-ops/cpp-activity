// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a class named Number.
// This class demonstrates unary operator overloading.
class Number
{
private:

    // Declare an integer data member named value.
    // This variable stores the number inside the object.
    int value;


public:

    // Create a constructor named Number.
    // The constructor initializes the value of the object.
    Number(int v)
    {
        // Store the received value in the value data member.
        value = v;
    }


    // Overload the unary minus (-) operator.
    // A unary operator works with only one operand.
    Number operator-()
    {
        // Create a new Number object with the negative
        // value of the current object's value.
        return Number(-value);
    }


    // Create a function named display().
    // This function displays the value stored in the object.
    void display() const
    {
        // Display the stored value on the screen.
        cout << "Value: " << value << endl;
    }
};


// The main() function is the starting point of the program.
int main()
{
    // Create an object named number.
    // Pass 25 to the constructor.
    Number number(25);


    // Display the original number.
    cout << "Original Number:" << endl;

    // Call the display() function for the original object.
    number.display();


    // Use the overloaded unary minus operator.
    // The expression -number calls operator-().
    Number negativeNumber = -number;


    // Display the number after applying the unary minus operator.
    cout << "\nAfter Unary Minus Operator (-):" << endl;

    // Display the value of the new object.
    negativeNumber.display();


    // Return 0 to indicate successful completion.
    return 0;
}