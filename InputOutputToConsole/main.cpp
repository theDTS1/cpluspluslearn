#include <iostream>

using namespace  std;

int main() {
    // Stream insertion operator
    cout << "Enter a value: " << endl;
    int value;
    // Stream Extraction operator
    cin >> value;
    cout << "Your value is: "<< value << endl;

    return 0;
}
