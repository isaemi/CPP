/*
(Sum of even locations) Write two overloaded functions that return the sum of
values at even locations of an array with the following headers:
int sumOfEven(const int* array, int size);
double sumOfEven(const double* array, int size);
Write a test program that reads five integers or double values,
invokes this function, and displays the sum of values at even locations.
*/

#include <iostream>
using namespace std;

int sumOfEven(const int* array, int size);
double sumOfEven(const double* array, int size);

int main(){
    int intArr[5];
    double doubleArr[5];

    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++){
        cin >> intArr[i];
    }
    cout << "Sum of values at even locations(int): " << sumOfEven(intArr, 5) << endl;
    
    cout << "Enter 5 doubles: ";
    for(int i = 0; i < 5; i++){
        cin >> doubleArr[i];
    }
    cout << "Sum of values at even locations(double): " << sumOfEven(doubleArr, 5) << endl;
    
    delete[] intArr;
    delete[] doubleArr;
    // intArr = nullptr;
    // doubleArr = nullptr;
    return 0;
}

int sumOfEven(const int* array, int size){
    int sum = 0;
    for(int i = 1; i < size; i += 2){
        sum += array[i];
    }

    return sum;
}
double sumOfEven(const double* array, int size){
    double sum = 0.0;
    for(int i = 1; i < size; i +=2 ){
        sum += array[i];
    }
    return sum;
}
