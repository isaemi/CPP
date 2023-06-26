#include <iostream>
using namespace std;

int main(){
    cout << "Convert temkperature in Celsius to Fahrenheit: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the temperature in Celsius: ";
    int Cels, Fahr;
    cin >> Cels;
    Fahr = Cels * (1.8) + 32;
    cout << "The temperature in Celsius: " << Cels << endl;
    cout << "The temperature in Fahrenheit: " << Fahr << endl;

    return 0;
}
