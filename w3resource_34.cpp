#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << "Display the Current Data and Time:" << endl;
    cout << "----------------------------------" << endl;
    cout << "seconds = " << (tPtr->tm_sec) << endl;
    cout << "minutes = " << (tPtr->tm_min) << endl;
    cout << "hours = " << (tPtr->tm_hour) << endl;
    cout << "day of month = " << (tPtr->tm_mday) << endl;
    cout << "month of year = " << (tPtr->tm_mon) << endl;
    cout << "year = " << (tPtr->tm_year)+1900 << endl;
    cout << "weekday = " << (tPtr->tm_wday) << endl;
    cout << "day of year = " << (tPtr->tm_yday) << endl;
    cout << "daylight savings = " << (tPtr->tm_isdst) << endl;
    cout << "Current Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) << "/" << (tPtr->tm_year) + 1900 << endl;
    cout << "Current Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;

    return 0;
}
