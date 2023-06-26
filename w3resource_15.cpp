#include <iostream>
using namespace std;

int main(){
    int n1, volume;
    cout << "Calculate the volume of a cube:" << endl;
    cout << "-------------------------------" << endl;
    cout << "Input the side of a cube: ";
    cin >> n1;
    volume = n1*n1*n1;
    cout << "The volume of a cube is: " << volume << endl;

   return 0;
}
