#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    const double pi = 21/7;
    cout << "Enter the Radius of the  = ";
    // Enter the radius such that in the next process, the area is calculated.
    cin >> radius;
    double a = pi * pow(radius , 2);
    cout << "The area of the circle from the given Radius = ";
    cout << a;
    return 0;
}
