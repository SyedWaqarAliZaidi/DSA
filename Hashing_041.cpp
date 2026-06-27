#include <iostream>
#include <stdio.h>
using namespace std;
int flag[10];
int Hashtable[10];
int Insertion(int num)
{
    
  int a = num%10;
  while(true)
  {
  if(flag[a] == 0)
  {
  Hashtable[a]=num;
  flag[a] = 1;
}
  else if(flag[a] != 0){
    i++;
  }
  else {
    cout << "no index is empty in this array"
  }
}
}
int main()
{
    int flag[10];
    for(int i = 0; i<10; i++)
    {
        Hashtable[i];
        flag[i] = 0;
    }
  int num;
  cout << "enter any value to store";
  cin >> num;
  Insertion();


}