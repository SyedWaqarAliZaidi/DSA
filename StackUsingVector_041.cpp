#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;
class MyStack {
    public:
    vector<int> st;
    void push(int val){
        st.push_back(val);

    }
    void pop(){
        if(st.empty()){
            cout << "stack empty\n";
            return;                      
        }
        st.pop_back();
    }
    int top(){
        if(st.empty()){
            cout << "stack empty\n";
            return -1;                      
        }
        return st[st.size() - 1];
    }
    bool empty(){
        return st.empty();
    }
    int size(){
        return st.size();
    }
}

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
cout << s.empty() << endl; // Output: 0 (false)
cout << s.size() << endl; // Output: 1
s.pop();
cout << s.empty() << endl; // Output: 1 (true)
return 0;

}
