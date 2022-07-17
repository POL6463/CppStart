#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    string fullName2 = firstName.append(lastName);
    cout << fullName2 << endl;

    return 0;
}