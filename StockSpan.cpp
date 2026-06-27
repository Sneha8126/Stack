#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void stockSpanProblem(vector<int>stock){

    vector<int>span(stock.size(),0);
    stack<int>s;
    
    for(int i=0;i<stock.size();i++){
    int currPrice = stock[i];
    while(!s.empty() && currPrice>=stock[s.top()]){
    s.pop();
    }
    if(s.empty()){
        span[i]=i+1;
    }
    else{
        int prevHigh = s.top();
        span[i]=i-prevHigh;
    }
     s.push(i); 
    }
    for(int val:span){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>stock = {100,80,60,70,60,75,100};

    stockSpanProblem(stock);
    return 0;
}


void stockSpanProblem(vector<int>stock){
    vector<int>span(stock.size(),0);
    stack<int>s;
    for(int i=0;i<stock.size();i++){
        int currPrice = stock[i];
        while(!s.empty()&&currPrice>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
        int prevHigh=s.top();
        span[i]=i-prevHigh;
        }
        s.push(i);
    }
    for(int val:span){
        cout<<val<<" ";
    }
}


void stockSpanProblem(vector<int>stock){
    vector<int>span(stosk.size(),0);
    stack<int>s;
    int currPrice = stock[i];
    for(int i=0;i<stock.size();i++){
    while(!s.empty() && currPrice>=stock[s.top()]){
        s.pop();
    }
    if(s.empty()){
        span[i]=i+1;
    }
    else{
        int prevHigh = s.top();
        span[i]=i-prevHigh;
    }
    s.push(i);
}
for(int val:span){
    cout<<val<<endl;
}
}