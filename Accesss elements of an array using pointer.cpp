#include <iostream>
using namespace std;
int main() {
   int arr[5] = {10, 45, 60, 65, 90};
   int *ptr = &arr[0];
   cout<<"The values in the array are: ";
   for(int i = 0; i < 5; i++) {
      cout<< *ptr <<" ";
      ptr++;
   }
   return 0;
}
