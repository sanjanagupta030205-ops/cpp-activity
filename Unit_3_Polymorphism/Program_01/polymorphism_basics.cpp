// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a base class named Animal.
// A base class is a class from which another class can inherit.
class Animal
{
public:

    // Declare a virtual function named sound().
    // virtual allows this function to be overridden in a derived class.
    // It helps achieve runtime polymorphism.
    virtual void sound()
    {
        // Display a message when the Animal sound function is called.
        cout << "Animal makes a sound." << endl;
    }
};


// Create a derived class named Dog.
// Dog inherits the public members of the Animal class.
class Dog : public Animal
{
public:

    // Override the sound() function of the Animal class.
    // override tells the compiler that we are replacing a virtual
    // function from the base class.
    void sound() override
    {
        // Display the sound made by the Dog.
        cout << "Dog barks." << endl;
    }
};


// Create another derived class named Cat.
// Cat also inherits from the Animal class.
class Cat : public Animal
{
public:

    // Override the sound() function of the Animal class.
    // This provides a different implementation of sound().
    void sound() override
    {
        // Display the sound made by the Cat.
        cout << "Cat meows." << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create a pointer named animal.
    // The pointer is of the Animal base-class type.
    Animal* animal;


    // Create an object named dog of the Dog class.
    Dog dog;


    // Store the address of the dog object in the animal pointer.
    // A base-class pointer can point to a derived-class object.
    animal = &dog;


    // Display a heading for the Dog object.
    cout << "Dog Object:" << endl;


    // Call the sound() function using the animal pointer.
    // Because sound() is virtual, the Dog version is called at runtime.
    animal->sound();


    // Create an object named cat of the Cat class.
    Cat cat;


    // Store the address of the cat object in the animal pointer.
    // The same base-class pointer now points to a Cat object.
    animal = &cat;


    // Display a heading for the Cat object.
    cout << "\nCat Object:" << endl;


    // Call the sound() function using the animal pointer.
    // Because sound() is virtual, the Cat version is called at runtime.
    animal->sound();


    // Return 0 to indicate that the program finished successfully.
    return 0;
}