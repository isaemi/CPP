#include <iostream>
using namespace std;

int main(){
    cout << "Print the multiplication table of a number upto 10:" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Input a number: ";
    int num, i = 0;
    cin >> num;
    for(i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
