#include <iostream>
#define PI 3.14159
using namespace std;

int main(){
    cout << "Find the area and circumference of any circle: " << endl;
    cout << "----------------------------------------------" << endl;
    double radius, area, circumference;
    cout << "Input the radius(1/2 of diameter) of a circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    circumference = 2 * PI * radius;
    cout << "The circumference of the circle is: " << circumference << endl;
    
    return 0;
}
