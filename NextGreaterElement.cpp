#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextGreaterElement(vector<int>arr){
    vector<int>ans(arr.size(),-1);
    stack<int>s;
    for(int i=arr.size()-1;i>=0;i--){
        int currVal = arr[i];
    while(!s.empty() && currVal>= s.top()){
        s.pop();
    }
    if(s.empty()){
        ans[i]=-1;
    }
    else{
        ans[i]=s.top();
    }
    s.push(currVal);
}
for(int val:ans){
    cout<<val<<" ";
}
cout<<endl;
}

int main(){
    vector<int>arr={6,8,0,1,3};
    nextGreaterElement(arr);
    return 0;
}

/*void nextGreaterElement(vector<int>arr){
    vector<int>ans(arr.size()-1;-1);
    stack s;
    for(int i=arr.size()-1;i>=0;i--){
        int currVal = arr[i];
        while(!s.empty() && currVal >= s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(currVal);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
}*/