#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Print the area of a polygon:" << endl;
    cout << "----------------------------" << endl;
    float num, length, area;
    cout << "Input the number of sides of the polygon: ";
    cin >> num;
    cout << "Input the length of each side of the polygon: ";
    cin >> length;
    area = (num * length * length) / (4 * tan(M_PI/num));
    cout << "The area of the polygon is: " << area << endl;
}
