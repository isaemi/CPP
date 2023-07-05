#include <iostream>
using namespace std;

int main(){
    cout << "Swap two numbers without using third variable:" << endl;
    cout << "----------------------------------------------" << endl;
    int n1, n2;
    cout << "Input 1st number: ";
    cin >> n1;
    cout << "Input 2nd number: ";
    cin >> n2;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "After swapping the 1st number is: " << n1 << endl;
    cout << "After swapping the 2nd number is: " << n2 << endl;

    return 0;
}
