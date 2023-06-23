#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Formatting the output:" << endl;
    cout << "----------------------" << endl;
    double pi = 3.14169256;
    cout << fixed << setprecision(4);
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" <<endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << scientific;
    cout << "The value of pi in scienctific format is : " << pi << endl;
    bool done = false;
    cout << "Status in number : " << done << endl;
    cout << "Status in alphabet : " << done << endl;

    return 0;
}
