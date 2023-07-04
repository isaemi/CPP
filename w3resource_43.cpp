#include <iostream>
#define PI 3.14159
using namespace std;
int main(){
    cout << "Find the area and circumference of any circle:" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle: ";
    float radius, area, circum;
    cin >> radius;
    area = (radius * radius) * PI;
    circum = 2 * PI * radius;
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circum << endl;
  
    return 0;
}
