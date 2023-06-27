#include <iostream>
using namespace std;

int main(){
    cout << "Convert temperature in Celsius to Kelvin: " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Input the temperature in Celsius: ";
    double cels, kelv;
    cin >> cels;
    kelv = cels + 273.15;
    cout << "The temperature in Celsius: " << cels << endl;
    cout << "The temperature in Kelvin: " << kelv << endl;
    return 0;
}
