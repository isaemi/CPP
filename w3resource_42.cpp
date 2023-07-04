#include <iostream>
using namespace std;

int main(){
    cout << "Print the name in reverse where last name comese first:" << endl;
    cout << "-------------------------------------------------------" << endl;
    string fName, lName, temp;
    cout << "Input First Name: ";
    cin >> fName;
    cout << "Input Last Name: ";
    cin >> lName;
    temp = fName;
    fName = lName;
    lName = temp;
    cout << "Name in reverse is: " << fName << " " << lName << endl;
    
    return 0;
}
