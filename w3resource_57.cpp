#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Print the area of a hexagon:" << endl;
    cout << "----------------------------" << endl;
    int side;
    float area;
    cout << "Input the side of the hexagon: " << endl;
    cin >> side;
    area = 3 * sqrt(3) / 2 * side * side;
    cout << "The area of the hexagon is: " << area << endl;

    return 0;
}
