#include <iostream>
using namespace std;

class Employee
{
private:
    int id;           // Instance variable: unique for each object
    static int count; // Static variable: shared among all objects of the class

public:
    // Member function to set the ID of the employee
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;

        // Each time an employee is created, increment the count
        // Static member 'count' keeps track of number of employees created
        count++;
    }

    // Member function to display employee data
    void getData(void)
    {
        cout << "The id is: " << id << " this is emp no: " << count << endl;
    }

    // Static function can only access static members
    static void getCount(void)
    {
        // Can access 'count' but not 'id' (non-static)
        cout << "The value of count is: " << count << endl;
    }
};

// Definition (and initialization) of static data member outside the class
int Employee::count = 0; // Initializes count to 0 before any Employee is created

int main()
{
    // Creating three objects of Employee class
    Employee aarya, rohan, rashi;

    // Setting and displaying data for each employee
    aarya.setData();
    aarya.getData();
    Employee::getCount(); // Call to static function using class name

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    rashi.setData();
    rashi.getData();
    Employee::getCount();

    return 0;
}
