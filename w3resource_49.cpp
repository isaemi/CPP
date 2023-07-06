#include <iostream>
using namespace std;

int main(){
    cout << "Print code (ASCII code / Unicode code etc.) of a given character:" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    char c1;
    cout << "Input a character: ";
    cin >> c1;
    cout << "The ASCII value of " << c1 << " is: " << int(c1) << endl;
    cout << "The character for the ASCII valuev" << int(c1) << " is: "  << c1 << endl;

    return 0;
}
