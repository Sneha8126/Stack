#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cctype>
using namespace std;

string decodeString(string s){
    stack<int>numStack;
    stack<string>strStack;
    string curr ="";
    int num=0;

    for(char c:s){
        if(isdigit(c)){
            num = num*10+(c-'0');
        }
        else if(c=='['){
            numStack.push(num);
            strStack.push(curr);
            curr="";
            num=0;
        }
        else if(c==']'){
            int k= numStack.top();
            numStack.pop();
            string prev = strStack.top();
            strStack.pop();
            string temp="";
            while(k>0){
                temp += curr;
                k--;
            }
            curr= prev+temp;
        }
        else{
            curr += c;
        }
    }
    return curr;
}

int main(){
    string s = "3[a]2[bc]";
    cout<<decodeString(s)<<endl;
    return 0;
}


string decodeString(string s){
    stack<int>numStack;
    stack<string>strStack;
    int num=0;
    string curr = "";

    for(char c:s){
        if(isdigit(c)){
            num=num*10+(c-'0');
        }
        else if(c=='['){
            numStack.push(num);
            strStack.push(curr);
            num=0;
            curr=0;
        }
        else if(c==']'){
            int k=numStack.top();
            numStack.pop();
            string prev= strStack.top();
            strStack.pop();
            string temp="";
            while(k>0){
            temp += temp+prev;
            k--;
            }
            curr = prev+temp;
        }
        else{
            curr += c;
        }
    }
    return curr;
}