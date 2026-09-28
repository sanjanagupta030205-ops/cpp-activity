// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a base class named Payment.
// This class represents a general payment.
class Payment
{
public:

    // Declare a virtual function named processPayment().
    // The virtual keyword allows runtime polymorphism.
    virtual void processPayment()
    {
        // Display a general payment message.
        cout << "Processing a general payment." << endl;
    }
};


// Create a derived class named UPI.
// UPI inherits from the Payment class.
class UPI : public Payment
{
public:

    // Override the processPayment() function.
    // This provides the UPI-specific implementation.
    void processPayment() override
    {
        // Display the UPI payment message.
        cout << "Processing payment through UPI." << endl;
    }
};


// Create another derived class named Card.
// Card inherits from the Payment class.
class Card : public Payment
{
public:

    // Override the processPayment() function.
    // This provides the Card-specific implementation.
    void processPayment() override
    {
        // Display the card payment message.
        cout << "Processing payment through Card." << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create an object named upi of the UPI class.
    UPI upi;


    // Create an object named card of the Card class.
    Card card;


    // Create a pointer named payment.
    // The pointer is of the base-class Payment type.
    Payment* payment;


    // Store the address of the UPI object in the base-class pointer.
    payment = &upi;


    // Display a heading for the UPI payment.
    cout << "UPI Payment:" << endl;


    // Call processPayment() using the base-class pointer.
    // Because the function is virtual, the UPI version is called.
    payment->processPayment();


    // Store the address of the Card object in the same pointer.
    payment = &card;


    // Display a heading for the Card payment.
    cout << "\nCard Payment:" << endl;


    // Call processPayment() using the base-class pointer.
    // Because the function is virtual, the Card version is called.
    payment->processPayment();


    // Return 0 to indicate successful completion of the program.
    return 0;
}