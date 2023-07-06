#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Calculate the Simple Interest:" << endl;
    cout << "------------------------------" << endl;
    int princ, rate, time, interest;
    cout << "Input the Principle: ";
    cin >> princ;
    cout << "Input the Rate of Interest: ";
    cin >> rate;
    cout << "Input the Time: ";
    cin >> time;
    interest = princ * rate * time / 100;
    cout << "The Simple interest for the amount " << princ << " for " << time << " years @ " << rate << " % is: " << interest << endl;

    return 0;
}
