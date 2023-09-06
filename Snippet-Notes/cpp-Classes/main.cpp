#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
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

// Using TypeDef
class TypeDefExample {
    // Creates a type of identifier
    // End identifier name with "_t"
    typedef std::vector<std::pair<std::string, int>> pairlist_t;
    typedef std::string text_t;
    // Using is more popular than typedef
    using number_t = int;

    number_t exampleNum = 1;
};

// Using Vectors
class VectorExample {
    vector <int> test_scores {100,95,99,87,88};

public:
    void VectorExampleOutput() {
        // Array Access version
        cout << test_scores[1] << endl;

        // Vector Example
        cout << test_scores.at(1) << endl;
    }
};

int main() {

    Employee person1 = {
        "John",
        "Doe",
        25
    };

    person1.IntroduceYourself();

    VectorExample().VectorExampleOutput();
    
    return 0;
}
