#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;
class MyStack {
    public:
    list<int> ll;
    void push(int val){
        ll.push_front(val);

    }
    void pop(){
        if(ll.empty()){
            cout << "stack empty\n";
            return;                      
        }
        ll.pop_front();
    }
    int top(){
        if(ll.empty()){
            cout << "stack empty\n";
            return -1;                      
        }
        return ll.front();
    }
    bool empty(){
        return ll.empty();
    }
    int size(){
        return ll.size();
    }
};

int main(){
MyStack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(20);
cout << s.top() << endl; // Output: 20
s.pop();
cout << s.top() << endl; // Output: 10

cout << s.size() << endl; // Output: 1
s.pop();
cout << s.empty() << endl; // Output: 1 (true)
return 0;


};
