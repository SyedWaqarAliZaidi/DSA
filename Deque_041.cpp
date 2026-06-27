#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_back(50);
    cout << "front element is: " << dq.front() << endl;
    cout << "back element is: " << dq.back() << endl;
    cout << "size of deque is: " << dq.size() << endl;
    cout << "Is deque empty? " << dq.empty() << endl;
    cout << dq.front() << endl; // Output: 10
    dq.pop_front();
}