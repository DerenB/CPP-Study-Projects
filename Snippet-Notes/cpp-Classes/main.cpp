#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Employee {
public:
    string firstName;
    string lastName;
    int age;
    string ageString = std::to_string(age);

    void IntroduceYourself() {
        string output = "Name: " + firstName + " " + lastName + ", " + ageString;
        cout << output << endl;
    }
};

int main() {
    Employee person1 = {
        "John",
        "Doe",
        25
    };

    person1.IntroduceYourself();
    cout << "Hello, World!" << endl;
    return 0;
}
