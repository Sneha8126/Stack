#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int ptr = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(ptr);
}

int main(){
    stack<int>s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(16);
    s.push(56);
  
    pushAtBottom(s,1);
   
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}

void pushAtBottom(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int ptr = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(ptr);
}