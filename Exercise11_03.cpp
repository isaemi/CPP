/*
(Sort an array) In Programming Exercise 7.14, you used bubble sort to sort an
array. The bubble sort function repeatedly compares the successive neighboring
pairs in the array and swaps them if they are in decreasing order. Modify the program by using the following header:
void bubbleSort(int* const array, int size)
The function returns an array that contains the sorted elements.
*/

#include <iostream>
using namespace std;

void bubbleSort(int* const array, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void deleteArray(int* arr){
    delete[] arr;
    arr = nullptr;
}

int main(){
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    //Dynamically allocate memory for the array
    int* arr = new int[size];
    
    cout << "Enter " << size << " integers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using bubble sort
    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
(Sort an array) In Programming Exercise 7.14, you used bubble sort to sort an
array. The bubble sort function repeatedly compares the successive neighboring
pairs in the array and swaps them if they are in decreasing order. Modify the program by using the following header:
void bubbleSort(int* const array, int size)
The function returns an array that contains the sorted elements.
*/
