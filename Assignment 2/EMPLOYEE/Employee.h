#include <iostream>
using namespace std;

class Employee
{
    // private
    // declaring new double pointer
    double *salary = new double;

public:
    // setter
    void setter(double);

    // getter
    double getter();

    // copy constructor
    Employee(Employee &obj);

    // default constructor
    Employee();

    // destructor
    ~Employee();

    // function to declare and initialize an array of static Special Instances
    Employee **Temporary(Employee obj[]);
};
