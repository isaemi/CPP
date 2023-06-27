#include <iostream>
using namespace std;

int main(){
    cout << "Check whether a number is positive" << endl;
    cout << "----------------------------------" << endl;
    int n;
    cout << "Input a number: ";
    cin >> n;
    if(n > 0){
        cout << "The entered number is positive";
    } else if (n == 0){
        cout << "The entered number is zero";
    } else{
        cout << "The entered number is negative";
    }

    return 0;
}
