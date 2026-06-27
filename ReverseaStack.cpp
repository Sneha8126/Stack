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

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,temp);
}

void printStack(stack<int>s){
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int>s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(16);
    s.push(56);
  
    printStack(s);
reverseStack(s);
   printStack(s);
 
    return 0;
}