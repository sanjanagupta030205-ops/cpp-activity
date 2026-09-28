// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a class named Complex.
// This class represents a complex number.
class Complex
{
private:

    // Declare a double variable named real.
    // This stores the real part of the complex number.
    double real;

    // Declare a double variable named imaginary.
    // This stores the imaginary part of the complex number.
    double imaginary;


public:

    // Create a constructor for the Complex class.
    // It receives the real and imaginary parts as parameters.
    Complex(double r, double i)
    {
        // Store the received real value.
        real = r;

        // Store the received imaginary value.
        imaginary = i;
    }


    // Overload the binary + operator.
    // The + operator will add two Complex objects.
    Complex operator+(const Complex& other)
    {
        // Add the real parts of both complex numbers.
        double newReal = real + other.real;

        // Add the imaginary parts of both complex numbers.
        double newImaginary = imaginary + other.imaginary;

        // Return a new Complex object containing the result.
        return Complex(newReal, newImaginary);
    }


    // Create a function named display().
    // This function displays the complex number.
    void display() const
    {
        // Display the real part followed by the imaginary part.
        cout << real << " + " << imaginary << "i" << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create the first Complex object.
    // Its real part is 3 and its imaginary part is 4.
    Complex number1(3, 4);


    // Create the second Complex object.
    // Its real part is 5 and its imaginary part is 2.
    Complex number2(5, 2);


    // Display the first complex number.
    cout << "First Complex Number: ";


    // Call display() for the first object.
    number1.display();


    // Display the second complex number.
    cout << "Second Complex Number: ";


    // Call display() for the second object.
    number2.display();


    // Use the overloaded + operator.
    // This adds number1 and number2.
    Complex result = number1 + number2;


    // Display the result of the addition.
    cout << "Sum of Complex Numbers: ";


    // Display the calculated complex number.
    result.display();


    // Return 0 to indicate successful completion of the program.
    return 0;
}