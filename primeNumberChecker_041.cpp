#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    bool isPrime = true;
    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n-1; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;

            }
            else
            {
                isPrime  = true;

            }
    }
    }
    if (isPrime = true)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;

    }
    return 0;

}
    