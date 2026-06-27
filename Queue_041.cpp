#include<iostream>
#include<queue>
using namespace std;    

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);     
    q.push(40);
    q.push(50);
    cout << "front element is": << q.front() << endl:
    cout << "back element is": << q.back() << endl:
    cout << "size of queue is": << q.size() << endl:
    cout << "Is queue empty?": << q.empty() << endl:
    cout << q.front() << endl; // Output: 10
    q.pop();
}