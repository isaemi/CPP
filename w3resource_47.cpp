#include <iostream>
using namespace std;

int *test(int arr[], int size){
    static int result[2];
    for(int i = 0; i < size; i++){
        arr[i] % 2 == 0 ? result[0] += arr[i] : result[1] += arr[i];
    }
    return result;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *eo;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    eo = test(arr, size);
    cout << "\nSum of all even and odd numbers: " << *(eo+0) << ", " << *(eo+1);

    return 0;
}
