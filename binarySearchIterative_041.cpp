#include<iostream>
#include<vector>
#include<list>
using namespace std;
int binarySearch(const vector<int>& arr, int tar)
{
  int start = 0, end = arr.size() - 1;
  while(start <= end)
  mid = start + (end - start)/2;
  if(arr[mid] < tar)
  {
    end = mid - 1;
  }
  else if(arr[mid] > tar)
  {
    start = mid + 1;
  }
  else
  {
    return mid;
  }
return -1;
}
int main()
{
    vector<int> arr = {1,3,5,7,9,11};
    int tar = 7;

    cout << binarySearch(arr, tar) << endl;
    return 0;
}