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
    int third = rand() % (MaxValue - MinValue + 1) + MinValue;
    int fourth = rand() % (MaxValue - MinValue + 1) + MinValue;
    int fifth = rand() % (MaxValue - MinValue + 1) + MinValue;
    int sixth = rand() % (MaxValue - MinValue + 1) + MinValue;
    int seventh = rand() % (MaxValue - MinValue + 1) + MinValue;
    int eight = rand() % (MaxValue - MinValue + 1) + MinValue;
    int ninth = rand() % (MaxValue - MinValue + 1) + MinValue;
    int tenth = rand() % (MaxValue - MinValue + 1) + MinValue;
    short number = first + second + third + fourth + fifth + sixth + seventh + eight + ninth + tenth;
    cout << "The numbers on dice are = " << endl<< first << endl << second <<  endl<< third << endl<< fourth<< endl<< fifth<< endl<< sixth<< endl<< seventh << endl<< eight<< endl<< ninth<< endl<< tenth << endl;
    cout << "The number obtained is = " << number<< endl;
    return 0;
}
