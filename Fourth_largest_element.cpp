#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Sort the array in descending order
  sort(arr, arr + n, greater<int>());

  // Print the fourth largest element
  cout << "The fourth largest element is " << arr[3] << endl;

  return 0;
}
