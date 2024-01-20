#include<iostream>>
using namespace std;

//finding the first occurence of element in the array using recursion 

int findFirstOccurrence(int arr[], int size, int target, int currentIndex) {
   if (currentIndex >= size) {
       return -1;
   }
   if (arr[currentIndex] == target) {
       return currentIndex;
   }
   return findFirstOccurrence(arr, size, target, currentIndex + 1);
}

int main() {
   int arr[] = {2, 4, 6, 8, 10, 8, 12};
   int size = sizeof(arr) / sizeof(arr[0]);
   int target = 8;

   int result = findFirstOccurrence(arr, size, target, 0);

   if (result != -1) {
      cout << "The first occurrence of " << target << " is at index: " << result << endl;
   } else {
      cout << target << " not found in the array." <<endl;
   }

   return 0;
}