#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Find the area of any triangle using Heron's Formula: " << endl;
    cout << "----------------------------------------------------" << endl;
    double n1, n2, n3, s, area;
    cout << "Input the length of 1st side of the triangle: ";
    cin >> n1;
    cout << "Input the length of 2nd side of the triangle: ";
    cin >> n2;
    cout << "Input the length of 34d side of the triangle: ";
    cin >> n3;
    s = (n1 + n2 + n3) / 2;
    area = sqrt(s * (s - n1) * (s - n2) * (s - n3));
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
