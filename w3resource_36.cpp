#include <iostream>
using namespace std;

int main(){
    cout << "Formatting the output using type casting:" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Print floating-point number in fixed format with 1 decimal place:" << endl;
    cout << "Test explicit type casting:" << endl;
    int i1 = 4, i2 = 8;
    cout << i1 / i2 << endl;
    cout << (double)i1 / i2 << endl;
    cout << i1 / (double)i2 << endl;
    cout << (double)(i1 / i2) << endl;
    cout << "Test implicit type casting:" << endl;
    double d1 = 5.5, d2 = 6.6;
    cout << (int)d1 / i2 << endl;
    cout << (int)(d1/i2) << endl;
    cout << "int implicit type casting: " << endl;
    d1 = i1;
    cout << d1 << endl;
    cout << "double truncates to int: " << endl;
    i2 = d2;
    cout << i2 << endl;

    return 0;
}
