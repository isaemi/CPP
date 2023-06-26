#include <iostream>
using namespace std;

int main(){
    cout << "Find the Area and Perimeter of a Rectangle: " << endl;
    cout << "-------------------------------------------" << endl;
    double length, width, area, perimeter;
    cout << "Input the length of the rectangle: ";
    cin >> length;
    cout << "Input the width of the rectangle: ";
    cin >> width;
    area = length * width;
    perimeter = (2 * length) + (2 * width);
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    
    return 0;
}
