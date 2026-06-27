#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
  int ans = 0, power = 1;
  while (decNum > 0)
      {
        int remainder = decNum % 2;
        ans += remainder * power;
        decNum /= 2;
        power *= 10;
      }
     return ans;
}

int main()
{
    int decNum;
    cout << "Enter any number for binary conversation: ";
    cin >> decNum;
    int binaryNum = decToBinary(decNum);
    cout << "Binary of " << decNum << " is: " << binaryNum << endl;
    return 0;
}