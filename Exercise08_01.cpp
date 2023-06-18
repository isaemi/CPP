/*  (Sum element in each column)
    Write a function that returns the sum of all the elements in a specified column in a tatrix using the following header:
    const int SIZE = 4;
    double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
*/
#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double sum = 0.0;
    for(int i = 0; i < rowSize; i++){
        sum += m[i][columnIndex];
    }
    return sum;
}

int main(){
    double row[3][SIZE];
    cout << "Enter a 3-by-4 matrix row by row: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < SIZE; j++){
            cin >> row[i][j];
        }
    }
    for(int j = 0; j < SIZE; j++){
        
        cout << "Sum of column " << j << " is " << sumColumn(row, 3, j) << endl;
    }
}
