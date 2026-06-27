#include <iostream>
using namespace std;

int main() {
    // Define your array here
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;  // Size of array
    
    // Display original array
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Selection Sort
    for(int i = 0; i < n-1; i++) {
        // Find minimum element
        int min_index = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        swap(arr[i], arr[min_index]);
    }
    
    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
