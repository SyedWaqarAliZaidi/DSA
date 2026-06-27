#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> arr)
{
    int mark = 0, i = 0;
    int sz = arr.size();
    int arr2[sz];
    while(mark < sz)
     {
       arr2[i] = arr[sz - 1];
       i++;
       sz--;
    
     }
     for(int j = 0; j < arr.size(); j++)
     {
        cout << arr2[j] << " ";
     }
}
int main()
{
    vector<int> arr = {2,4,6,8,10};
    reverseArray(arr);
    return 0;
}