// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create an abstract base class named Shape.
// This class represents a general shape in a CAD system.
class Shape
{
public:

    // Declare a pure virtual function named draw().
    // The = 0 makes draw() a pure virtual function.
    // Every derived shape class must provide its own draw() function.
    virtual void draw() = 0;


    // Declare a virtual destructor.
    // This ensures that derived-class destructors are called correctly
    // when an object is deleted through a Shape pointer.
    virtual ~Shape()
    {
        // Display a message when the Shape destructor is called.
        cout << "Shape destructor called." << endl;
    }
};


// Create a derived class named Circle.
// Circle inherits from the abstract Shape class.
class Circle : public Shape
{
public:

    // Override the pure virtual draw() function.
    // This provides the drawing operation for a circle.
    void draw() override
    {
        // Display the shape being drawn.
        cout << "Drawing a Circle." << endl;
    }


    // Create the destructor of the Circle class.
    ~Circle()
    {
        // Display a message when the Circle destructor is called.
        cout << "Circle destructor called." << endl;
    }
};


// Create another derived class named Rectangle.
// Rectangle also inherits from the Shape class.
class Rectangle : public Shape
{
public:

    // Override the pure virtual draw() function.
    // This provides the drawing operation for a rectangle.
    void draw() override
    {
        // Display the shape being drawn.
        cout << "Drawing a Rectangle." << endl;
    }


    // Create the destructor of the Rectangle class.
    ~Rectangle()
    {
        // Display a message when the Rectangle destructor is called.
        cout << "Rectangle destructor called." << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create a Circle object.
    Circle circle;


    // Create a Rectangle object.
    Rectangle rectangle;


    // Create a pointer of the abstract Shape class.
    // This pointer can point to objects of derived classes.
    Shape* shape;


    // Store the address of the Circle object in the Shape pointer.
    shape = &circle;


    // Display a heading for the Circle.
    cout << "CAD Shape 1:" << endl;


    // Call draw() using the Shape pointer.
    // Runtime polymorphism calls the Circle version of draw().
    shape->draw();


    // Store the address of the Rectangle object in the same Shape pointer.
    shape = &rectangle;


    // Display a heading for the Rectangle.
    cout << "\nCAD Shape 2:" << endl;


    // Call draw() using the Shape pointer.
    // Runtime polymorphism calls the Rectangle version of draw().
    shape->draw();


    // Set the pointer to nullptr.
    // nullptr means that the pointer is not pointing to an object.
    shape = nullptr;


    // Return 0 to indicate successful completion of the program.
    return 0;
}