#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int tar,int start, int end)
{
 
  while(start <= end)
  {
    int mid = start + (end - start)/2;
    if(arr[mid] < tar)
      {
        return binarySearch(arr, tar, mid + 1, end);
      }
    else if(arr[mid] > tar)
      {
        return binarySearch(arr, tar, start, mid - 1);
      }
    else
      {
        return mid;
      }
  }
  return -1;
}

int main()
{
    vector<int> arr = {1,3,5,7,9,11};
    int tar = 11;
    int start = 0, end = arr.size() - 1;
    cout << binarySearch(arr, tar, start, end) << endl;
    return 0;
}

