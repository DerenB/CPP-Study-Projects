#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Person {
public:
    string firstName;
    string lastName;
    int age;
};

int main() {
    Person employee1;
    employee1.firstName = "John";
    employee1.lastName = "Doe";
    employee1.age = 24;

    string outputString = employee1.firstName + " " + employee1.lastName;
    cout << outputString << endl;
    return 0;
}
