#include <iostream>
using namespace std;

int main(){
    cout << "Convert temperature in Kelvin to Celsius" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Input the temperature in Kelvin: ";
    double kelv, cels;
    cin >> kelv;
    cels = kelv - 273.15;
    cout << "The temperature in Kelvin: " << kelv << endl;
    cout << "The temperature in Celsius: " << cels << endl;
    
    return 0;
}
