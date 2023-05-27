/*2 (Print the consonants) Write a program that first reads an integer for the array size,
then reads characters into the array, and displays the consonants (i.e., a character
is displayed only if it a consonant). (Hint: Read a character and store it to an array
if it is not a vowel. If the character is a vowel, discard it. After the input, the array
contains only the consonants.)*/

#include <iostream>
using namespace std;

int main(){
    // Prompt the user to enter array Size
    cout << "Enter array size: ";
    int arraySize;
    cin >> arraySize;

    int* numbers = new int[arraySize];
    int size = 0;

    for(int i = 0; i < arraySize; i++){
        // Read and store numbers in an array if it is new
        cout << "Enter an integer: ";
        int value;
        cin >> value;

        bool isInArray = false;

        for(int j = 0; j < size; j++)
            if(*(numbers + j) == value){
                isInArray = true;
                break;
            }
            if(!isInArray){
                *(numbers + size) = value;
                size++;
            }
    }
    for(int i = 0; i < size; i++)
        cout << *(numbers + i) << " ";

    return 0;
}
