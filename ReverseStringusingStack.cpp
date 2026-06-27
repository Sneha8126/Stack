#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top = s.top();
        ans = ans + top;
        s.pop();
    }
    return ans;
    
}

int main(){
    string str = "abcd";
    cout<<"Reversed String : "<<reverseString(str)<<endl;
    return 0;
}

string reverseString(string str){
    stack<char>s;
    string ans;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top = s.top();
        ans =ans + top;
        s.pop();
    }
    return ans;
}