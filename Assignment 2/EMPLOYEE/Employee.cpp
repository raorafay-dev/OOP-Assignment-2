#include <iostream>
using namespace std;
#include"employee.h"


// setter function to initialize the private data member (salary)
void Employee ::setter(double s)
{
    // derefrencing and updating
    *salary = s;
}

// getter function to access private data member (salary)
double Employee ::getter()
{
    // derefrencing and returning
    return *salary;
}

// copy constructor
Employee ::Employee(Employee &obj)
{
    cout << "Copy Constructor" << endl;
    // using method of (deep copy) constructor
    // making a new memory block for object
    salary = new double;
    // derefrencing data member and copying into other
    *salary = *(obj.salary);
}

// default constructor
Employee ::Employee()
{ /* essential to operate another defined constructors in class */
    salary = new double;
}

// destructor
Employee ::~Employee()
{ /* to release allocated memory assignned during instantiation */
    delete salary;
    salary = nullptr;
}

// function to declare and initialize an array of static Special Instances
Employee Employee ::**Temporary(Employee obj[])
{

    for (int i = 0; i < 10; i++)
    {

    }
}
