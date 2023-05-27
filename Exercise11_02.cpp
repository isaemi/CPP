/*
(Print the consonants) Write a program that first reads an integer for the array size,
then reads characters into the array, and displays the consonants (i.e., a character
is displayed only if it a consonant). (Hint: Read a character and store it to an array
if it is not a vowel. If the character is a vowel, discard it. After the input, the array
contains only the consonants.)
*/
#include <iostream>
using namespace std;

bool isVowel(char c){
    c = tolower(c); // Convert to lowercase for easier comparison
    return (c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u');
}

void deleteArray(char*& arr){
    delete[] arr;
    arr = nullptr;
}

int main(){
    // Prompt the user to enter array size
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Dynamically allocate memory for the array
    char* arr = new char[size];
    cout << "Enter " << size << " characters: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Consonants in the array: ";
    for(int i = 0; i < size; i++){
        if(!isVowel(arr[i])){
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    //Delete the array pointer and set it to nullptr
    deleteArray(arr);

    return 0;
}
