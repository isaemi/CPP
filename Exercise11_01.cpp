/*
(Analyze input) Write a program that first reads an integer for the array size, then
reads numbers into the array, counts the even numbers and the odd numbers and
displays them. 
*/
#include <iostream>
using namespace std;

void deleteArray(int*& arr){
    delete[] arr;
    arr = nullptr;
}

int main(){
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    // Allocate memory for the dynamic array
    int* numbers = new int[size];

    // Read numbers into the array
    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; i++){
        cin >> *(numbers + i);
    }

    int evenCount = 0;
    int oddCount = 0;

    // Count the even and odd numbers
    for(int i = 0; i < size; i++){
        if(*(numbers + i) % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }

    }

    // Display the counts
    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;


    // Delete the array and set it to nullptr
    deleteArray(numbers);
    return 0;
}
