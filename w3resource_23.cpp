#include <iostream>
using namespace std;

int main(){
    cout << "Convert kilometers per hour to miles per hour: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the distance in kilometer: ";
    float kilo, miles;
    cin >> kilo;
    miles = kilo * 0.621371;
    cout << "The " << kilo << "Km./hr. means " << miles << " Miles/hr." << endl;

    return 0;
}
