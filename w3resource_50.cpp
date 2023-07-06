#include <iostream>
using namespace std;

int main(){
    cout << "Convert centimeter into meter and kilometer:" << endl;
    cout << "--------------------------------------------" << endl;
    double cent, meter, kilo;
    cout << "Input the distance in centimeter: ";
    cin >> cent;
    meter = cent / 100;
    kilo = cent / 100000;
    cout << "The distance in meter is: " << meter << endl;
    cout << "The distance in kilometer is: " << kilo << endl;
    return 0;
}
