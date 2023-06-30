#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const short MaxValue = 6;
    const short MinValue = 1;
    srand(time(nullptr));
    int first = rand() % (MaxValue - MinValue + 1) + MinValue;
    int second = rand() % (MaxValue - MinValue + 1) + MinValue;
    short number = first + second;
    cout << "The numbers on dice are = " << first << "," << second << endl;
    cout << "The number obtained is = " << number<< endl;
    cout << sizeof(number);
    return 0;
}