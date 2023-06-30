#include <iostream>

using namespace std;

int main() {
	cout << "Enter the Temperature you want to change (in Fahrenheit)= ";
    double temp;
    cin >> temp;
    double cels = (temp - 32) * 5/9;
    cout << "The temperature in Celsisus is = " << cels;
    return 0;
} 
