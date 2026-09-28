// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create a base class named Account.
// This class represents a general bank account.
class Account
{
public:

    // Declare a virtual destructor.
    // A destructor is automatically called when an object is destroyed.
    // The virtual keyword ensures that the derived-class destructor
    // is called correctly when deleting through a base-class pointer.
    virtual ~Account()
    {
        // Display a message when the Account destructor is called.
        cout << "Account destructor called." << endl;
    }
};


// Create a derived class named SavingsAccount.
// SavingsAccount inherits from the Account class.
class SavingsAccount : public Account
{
public:

    // Declare the destructor of the SavingsAccount class.
    ~SavingsAccount()
    {
        // Display a message when the SavingsAccount destructor is called.
        cout << "SavingsAccount destructor called." << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create a base-class pointer named account.
    // The pointer can point to an object of a derived class.
    Account* account;


    // Dynamically create a SavingsAccount object.
    // The new operator creates the object in dynamic memory.
    account = new SavingsAccount();


    // Delete the object using the base-class pointer.
    // Because the Account destructor is virtual,
    // the SavingsAccount destructor is called first.
    // Then the Account destructor is called.
    delete account;


    // Set the pointer to nullptr.
    // nullptr means that the pointer does not point to an object.
    account = nullptr;


    // Return 0 to indicate successful completion of the program.
    return 0;
}