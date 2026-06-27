#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(4);
     s.push(5);
      s.push(6);
       s.push(16);
        s.push(56);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}