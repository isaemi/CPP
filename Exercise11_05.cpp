/*
(Find the largest element) Use pointers to write a function that finds the largest element in an array of integers.
Use {6, 7, 9, 10, 15, 3, 99, -21} to test the function.
*/

#include <iostream>
using namespace std;

int findLargestElement(int* arr, int size);

void deleteArray(int*& arr){
    delete[] arr;
    arr = nullptr;
}
int main(){
    int size;
    cout<< "Enter the size of the array: ";
    cin >> size;
    
    int* array = new int[size];
    cout << "Enter " << size << " integers: ";
    for(int i = 0; i < size; i++){
        cin >> *(array + i);
    }

    // Find the largest lement in the array using the function
    int largestElement = findLargestElement(array, size);

    // Display the largest element
    cout << "The largest element is: " << largestElement << endl;

    // Free the dynamically allocated memory
    deleteArray(array);

    return 0;
}

int findLargestElement(int* arr, int size){
    // Initialize the largest element with the first element of the array
    int largest = *arr;

    // Iterate through the remaining elements of the array
    for(int i = 0; i < size; i++){
        // Check if the current element is greater than the largest element
        if(*(arr + i) > largest){
            largest = *(arr + i);
        }
    }

    return largest;
}
