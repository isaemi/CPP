/*
(Count occurrences of each digit in an integer) Rewrite the countDigits function in Programming Exercise 10.7 using the following header:
int* countDigits(const int& number)
This function returns the counts as an array of 10 elements. For example, after invoking
int counts[] = countDigits(11223)
counts[0] is 0, counts[1] is 2, counts[2] is 2,
counts[3] is 1, ...
 Write a test program that prompts the user to enter an integer, invokes the countDigits function, and displays the counts of each digit in the given integer.
 */

#include <iostream>
#include <string>
using namespace std;

int* countLetters(const string& s){
    int* counts = new int[26];
    for(int i = 0; i < 26; i++){
        counts[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]))
            counts[tolower(s[i]) - 'a'] ++;
    }

    return counts;
}
int main(){
    int* counts = countLetters(string("ABcaBaddeekjdfefdeg,TTew44Tt"));

    for(int i = 0; i < 26; i++)
        cout << static_cast<char>(i + 'a') << " " << counts[i] << endl;

    return 0;
}
