#include <iostream>
using namespace std;

int main(){
    cout << "Convert temperature in Fahrenheit to Celsius: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the temperature in Fahrenheit: ";
    float Cels, Fahr;
    cin >> Fahr;
    Cels = (Fahr - 32) / 1.8;
    cout << "The temperature in Fahrenheit: " << Fahr << endl;
    cout << "The temperature in Celsius: " << Cels << endl;
    
    return 0;
}
