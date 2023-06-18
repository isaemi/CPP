/*  (Sum the major diagonal in a matrix)
    Write a function that sums all the double values in the major diagonal
    in an n*n matrix of double values using the following header:

    const int SIZE = 4;
    double sumMajorDiagonal(const double m[][SIZE]);
    Write a test program that reads a 4-by-4 matrix and displays the sum of all its elements on the major diagonal.
*/
#include <iostream>
using namespace std;

const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]){
    double sum = 0.0;
    for(int i = 0; i < SIZE; i++){
        sum += m[i][i];
    }
    return sum;
}
int main(){
    double num[SIZE][SIZE];
    cout << "Enter a 4 by 4 matrix row by row: " << endl;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            cin >> num[i][j];
        }
    }
    
    double diagonalSum = sumMajorDiagonal(num);
    cout << "Sum of the element in the major diagonal is " << diagonalSum;
    
    return 0;
}
