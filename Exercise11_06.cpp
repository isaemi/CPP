/*
(Occurrences of each digit in a string) Write a function that counts the occurrences
of each digit in a string using the following header:
int* count(const string& s)
The function counts how many times a digit appears in the string. The return value
is an array of ten elements, each of which holds the count for a digit. For example, after executing int* counts = count("12203AB3"), counts[0] is 1,
counts[1] is 1, counts[2] is 2, counts[3] is 2.
 Write a main function to display the count for "SSN is 343 32 4545 and ID
is 434 34 4323".
 Redesign the function to pass the counts array in a parameter as follows:
void count(const string& s, int counts[], int size)
*/

#include <iostream>
#include <cstring>
using namespace std;

int* count(const char* const s);
void deleteArray(int*& arr);

int main(){
    int* counts = count("SSN is 343 32 4545 and ID is 434 34 4323");

    for(int i=0; i < 10; i++){
        cout << i << " " << counts[i] << endl;
    }

    deleteArray(counts);

    return 0;
}

int* count(const char* const s){
    int* counts = new int[10];
    for (int i = 0; i < 10; i++)
        counts[i] = 0;
    
    for(int i = 0; i < strlen(s); i++){
        if(isdigit(s[i]))
            counts[s[i] - '0']++;
    }
    return counts;
}
void deleteArray(int*& arr){
    delete[] arr;
    arr = nullptr;
}
