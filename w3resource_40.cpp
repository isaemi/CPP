#include <iostream>
using namespace std;
int main(){
    cout << "Print the area and perimeter of a rectangle:" << endl;
    cout << "--------------------------------------------" << endl;
    double width, height, area, perimeter;
    cout << "Input the width of the rectangle: ";
    cin >> width;
    cout << "Input the height of the rectangle: ";
    cin >> height;
    area = width * height;
    perimeter = 2 * (width + height);
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
