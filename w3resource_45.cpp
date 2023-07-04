#include <iostream>
#define PI 3.14159
using namespace std;
int main(){
    double n1, n2, volume;
    cout << "Input Cone's radius: ";
    cin >> n1;
    cout << "Input Cone's height: ";
    cin >> n2;
    volume = PI * n1 * n1 * (n2 / 3);
    cout << "The volume of the cone is: " << volume << endl;

    return 0;
}
