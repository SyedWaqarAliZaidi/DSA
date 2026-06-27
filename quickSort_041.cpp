#include <iostream>
#include <stdio.h>
using namespace std;


void set_Pivot(vector<int> &arr, int str, int end)
{
    int idx = str - 1;
    int pivot = arr[end];
    for(int j = str; j < end; j++){
      if(arr[j] < pivot){
        idx++;
        swap(arr[idx], arr[j]);
      }
    }
    swap(arr[idx++] ,arr[end]);
   return idx;
}

void QuickSort(vector<int> &arr, int str, int end){

    if(str < end){
        int p=set_pivot(arr, str, end);
        cout<<p<<"...";
        QuickSort(arr ,str,p-1);
        QuickSort(arr ,p+1,end);
    }

}
int main()
{
  int lst[7]= {23, 64, 35, 89, 12, 54, 77};
int end = sizeof(lst)/sizeof(lst[0])-1;
int str = 0;
QuickSort(lst, str, end);

for (int i = 0; i<7; i++)
{

    cout << lst[i]<<",";
}


}