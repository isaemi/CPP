#include <iostream>
using namespace std;

int main(){
    cout << "Convert temperature in Kelvin to Fahrenheit: " << endl;
    cout << "--------------------------------------------" << endl;
    double kelv, fahr;
    cout << "Input the temperature in Kelvin: ";
    cin >> kelv;
    fahr = 1.8 * (kelv - 273.15) + 32;
    cout << "The temperature in Kelvin: " << kelv << endl;
    cout << "The temperature in Fahrenheit: " << fahr << endl;

    return 0;
}
