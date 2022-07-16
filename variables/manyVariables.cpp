#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;

    int a, b, c;
    a = b = c = 50;
    cout << a + b + c << endl;

    const int myNum = 15; // const는 변경 불가

    return 0;
}