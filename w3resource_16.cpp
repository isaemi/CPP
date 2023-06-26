#include <iostream>
using namespace std;

int main(){
    int radius, height;
    double volume;
    double PI = 3.14;
    cout << "Calculate the volume of a cylinder:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Input the radius of the cylinder: ";
    cin >> radius;
    cout << "Input the height of the cylinder: ";
    cin >> height;
    volume = PI * radius * radius * height;
    cout << "The volume of a cylinder is: " << volume << endl;
    
   return 0;
}
