#include <iostream>
using namespace std;

int main(){
    cout << "Compute the total and average of four numbers:" << endl;
    cout << "----------------------------------------------" << endl;
    double n1, n2, n3, n4, total, ave;
    cout << "Input 1st two numbers (separated by space): ";
    cin >> n1 >> n2;
    cout << "Input last two numbers (separated by space): ";
    cin >> n3 >> n4;
    total = n1 + n2 + n3 + n4;
    ave = total / 4;
    cout << "The total of four number is: " << total << endl;
    cout << "The average of four number is: " << ave << endl;

    return 0;
}
