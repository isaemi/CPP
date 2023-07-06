#include <iostream>
using namespace std;

int main(){
    cout << "Convert kilometers per hour to miles per hour:" << endl;
    cout << "----------------------------------------------" << endl;
    double kilo, miles;
    cout << "Input the distance in kilometer:";
    cin >> kilo;
    miles = kilo * 0.62137119;
    cout << "The " << kilo << " Km./hr. means " << miles << " Miles/hr." << endl;

    return 0;
}
