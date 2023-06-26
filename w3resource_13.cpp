#include <iostream>
using namespace std;

int main(){
   cout << "Swap two numbers:" << endl;
   cout << "-----------------" << endl;
   int n1, n2, temp;
   cout << "Input 1st number: ";
   cin >> n1;
   cout << "Input 2nd number: ";
   cin >> n2;
   temp = n1;
   n1 = n2;
   n2 = temp;
   cout << "After swapping the 1st number is: " << n1 << endl;
   cout << "After swapping the 2nd number is: " << n2 << endl;

   return 0;
}
