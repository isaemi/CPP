#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Calculate the area of the Equilateral Triangle:" << endl;
    cout << "-----------------------------------------------" << endl;
    double side, area;
    cout << "Input the value of the side of the equilateral triangle:";
    cin >> side;
    area = sqrt(3)/ 4 * side * side;
    cout << "The area of equilateral triangle is: " << area << endl;

    return 0;
}
