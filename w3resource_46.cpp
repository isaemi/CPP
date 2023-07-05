#include <iostream>
using namespace std;

int main(){
    cout << "Calculate the volume of a cylinder:" << endl;
    cout << "-----------------------------------" << endl;
    double rad, height, volume;
    cout << "Input the radius of the cylinder: ";
    cin >> rad;
    cout << "Input the height of the cylinder: ";
    cin >> height;
    volume = 3.14 * rad * rad * height;
    cout << "The volume of a cylinder is: " << volume;
    
    return 0;
}
