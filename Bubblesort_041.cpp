#include <iostream>
using namespace std;

int main() {
    // Define your array here
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;  // Size of array
 l
    // Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
              swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}