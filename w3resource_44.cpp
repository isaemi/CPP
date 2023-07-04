#include <iostream>
#define PI 3.14
using namespace std;
int main(){
    cout << "Calculate the volume of a sphere:" << endl;
    cout << "---------------------------------" << endl;
    float radius, volume;
    cout << "Input the radius of a sphere: ";
    cin >> radius;
    volume = (4 * PI * radius * radius * radius) / 3;
    cout << "The volume of a sphere is: " << volume << endl;

    return 0;
}
