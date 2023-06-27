#include <iostream>
#define PI 3.14159
#include <cmath>

using namespace std;

int main(){
    cout << "Find the area of Scalene Triangle: " << endl;
    cout << "----------------------------------" << endl;
    cout << "Input the length of a side of the triangle: ";
    double len1, len2, angle, area;
    cin >> len1;
    cout << "Input the length of another side of the triangle: ";
    cin >> len2;
    cout << "Input the angle between these sides of the triangle: ";
    cin >> angle;
    area = len1 * len2 * sin((PI/180)*angle) / 2;
    cout << "The area of the Scalene Triangle is: " << area << endl;

    return 0;
}
