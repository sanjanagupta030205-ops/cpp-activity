// Include the input/output stream library.
// This library allows us to use cout for displaying output.
#include <iostream>

// Use the standard namespace.
// This allows us to write cout instead of std::cout.
using namespace std;


// Create an abstract base class named Employee.
// This class cannot be used to create direct objects
// because it contains a pure virtual function.
class Employee
{
public:

    // Declare a pure virtual function named calculateSalary().
    // The = 0 makes this function a pure virtual function.
    // Derived classes must provide their own implementation.
    virtual void calculateSalary() = 0;

    // Declare a virtual destructor.
    // This allows the derived-class destructor to be called correctly.
    virtual ~Employee()
    {
        // Display a message when the Employee destructor is called.
        cout << "Employee destructor called." << endl;
    }
};


// Create a derived class named FullTimeEmployee.
// This class inherits from the abstract Employee class.
class FullTimeEmployee : public Employee
{
private:

    // Declare an integer variable named salary.
    // This stores the monthly salary of the employee.
    int salary;


public:

    // Create a constructor for the FullTimeEmployee class.
    // It receives the salary as a parameter.
    FullTimeEmployee(int s)
    {
        // Store the received salary in the salary variable.
        salary = s;
    }


    // Override the pure virtual calculateSalary() function.
    // This provides the implementation required by the abstract class.
    void calculateSalary() override
    {
        // Display the salary of the full-time employee.
        cout << "Full-Time Employee Salary: " << salary << endl;
    }


    // Create a destructor for the FullTimeEmployee class.
    ~FullTimeEmployee()
    {
        // Display a message when the derived-class destructor is called.
        cout << "FullTimeEmployee destructor called." << endl;
    }
};


// The main() function is the starting point of the C++ program.
int main()
{
    // Create a pointer of the abstract Employee class.
    // A pointer can refer to an object of a derived class.
    Employee* employee;


    // Create a FullTimeEmployee object dynamically.
    // The salary is set to 50000.
    employee = new FullTimeEmployee(50000);


    // Call calculateSalary() using the Employee pointer.
    // The FullTimeEmployee implementation is executed.
    employee->calculateSalary();


    // Delete the dynamically created object.
    // Because the destructor is virtual, the derived destructor
    // is called before the base-class destructor.
    delete employee;


    // Set the pointer to nullptr.
    // nullptr means the pointer is not pointing to an object.
    employee = nullptr;


    // Return 0 to indicate successful completion of the program.
    return 0;
}