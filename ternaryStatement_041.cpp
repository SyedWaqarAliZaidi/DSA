#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20, c=30;
    int max = (a > b) ? ((a > c)? a : c) : ((b > c)? b : c);
    cout << "the maximum number is: " <<max << endl;
    return 0;

}