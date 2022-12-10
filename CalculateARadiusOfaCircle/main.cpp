#include <iostream>
#include <cmath>
using namespace  std;

int main() {
    //floor func
//    double result = floor(1.2);
//    cout << result;
    //pow func
//    double result = pow(2,3);
//    cout << result;

        // Calculate a radius of a circle - The radius of a circle is half the diameter.
    cout << "Enter radius: " << endl;
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double  area = pi * pow(radius,2);
    cout << area;
    return 0;
}
