#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Calculate the Compound Interest:" << endl;
    cout << "--------------------------------" << endl;
    double p, r, t, ci, cp;
    cout << "Input the Principle: ";
    cin >> p;
    cout << "Input the Rate of Interest: ";
    cin >> r;
    cout << "Input the Time: ";
    cin >> t;
    ci = p * pow((1 +r/100), t)-p;
    cp = p * pow((1 +r/100), t);
    cout << "The Interest after compounded for the amount " << p << " for " << t << " @ " << r << " is: " << ci << "The total amount after compounded for the amount " << p << " for " << t << " years @" << endl;
    cout << r << " % is: " << cp << endl;

    return 0;
}
