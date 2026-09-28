// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a base class named Shape.
// This class will contain a pure virtual function.
class Shape
{
public:

    // Declare a pure virtual function named area().
    // The = 0 makes this function a pure virtual function.
    // A derived class must provide its own implementation of area().
    virtual void area() = 0;
};


// Create a derived class named Rectangle.
// Rectangle inherits from the Shape class.
class Rectangle : public Shape
{
private:

    // Declare an integer variable named length.
    // This stores the length of the rectangle.
    int length;

    // Declare an integer variable named width.
    // This stores the width of the rectangle.
    int width;


public:

    // Create a constructor for the Rectangle class.
    // It receives length and width as parameters.
    Rectangle(int l, int w)
    {
        // Store the received length in the length variable.
        length = l;

        // Store the received width in the width variable.
        width = w;
    }


    // Override the pure virtual area() function.
    // The Rectangle class provides its own implementation.
    void area() override
    {
        // Calculate the area of the rectangle.
        // Area = length × width.
        int result = length * width;

        // Display the calculated area.
        cout << "Area of Rectangle: " << result << endl;
    }
};


// The main() function is the starting point of the program.
int main()
{
    // Create a Rectangle object named rectangle.
    // Pass 10 as the length and 5 as the width.
    Rectangle rectangle(10, 5);


    // Call the area() function using the Rectangle object.
    // The Rectangle implementation of area() is executed.
    rectangle.area();


    // Return 0 to indicate successful completion of the program.
    return 0;
}