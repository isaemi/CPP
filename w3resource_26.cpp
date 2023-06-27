#include <iostream>
using namespace std;

int main(){
    cout << "Convert temperature in Fahrenheit to Kelvin: " << endl;
    cout << "--------------------------------------------" << endl;
    double fahr, kelv;
    cout << "Input the temperature in Fahrenheit: ";
    cin >> fahr;
    kelv = (((fahr - 32) * 5) / 9) + 273.15;
    cout << "The temperature in Fahrenheit: " << fahr << endl;
    cout << "The temperature in Kelvin: " << kelv << endl;

    return 0;
}
