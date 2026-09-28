// Include the input/output stream library.
// This library provides cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a class named Number.
// A class is a user-defined data type that contains data and functions.
class Number
{
private:

    // Declare an integer variable named value.
    // This variable stores the number inside the object.
    int value;


public:

    // Create a constructor named Number.
    // The constructor is automatically called when an object is created.
    // int v receives the value provided while creating the object.
    Number(int v)
    {
        // Assign the value of v to the class data member value.
        value = v;
    }


    // Define the + operator for Number objects.
    // This is called binary operator overloading.
    // The operator works with two objects.
    Number operator+(const Number& other)
    {
        // Add the value of the current object to the value
        // of the other Number object.
        // Create and return a new Number object containing the result.
        return Number(value + other.value);
    }


    // Create a function named display().
    // const means this function will not modify the object.
    void display() const
    {
        // Display the word "Value:" on the screen.
        // Then display the value stored inside the object.
        // endl moves the cursor to the next line.
        cout << "Value: " << value << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create an object named num1 of the Number class.
    // Pass 10 to the constructor.
    // Therefore, num1 stores the value 10.
    Number num1(10);


    // Create another object named num2 of the Number class.
    // Pass 20 to the constructor.
    // Therefore, num2 stores the value 20.
    Number num2(20);


    // Display a heading for the first number.
    cout << "First Number:" << endl;

    // Call the display() function using num1.
    // This displays the value stored in num1.
    num1.display();


    // Display a heading for the second number.
    cout << "Second Number:" << endl;

    // Call the display() function using num2.
    // This displays the value stored in num2.
    num2.display();


    // Use the overloaded + operator.
    // num1 + num2 calls the overloaded operator+() function.
    // The result is stored inside a new object named result.
    Number result = num1 + num2;


    // Display a heading for the calculated result.
    cout << "\nAfter Binary Operator (+):" << endl;

    // Call display() using the result object.
    // This displays the calculated value 30.
    result.display();


    // Return 0 to indicate that the program completed successfully.
    return 0;
}