#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Stack{
    vector<T>vec;
    public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty!";
            return;
        }
        vec.pop_back();
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        int lastIndex = vec.size()-1;
        return vec[lastIndex];
    }
    void display(){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    bool isEmpty(){
        if(vec.size()==0){
            return true;
        }
        return false;
    }
};


int main(){
    Stack<int>s;
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(10);
    s.display();
   s.pop();
     s.display();
     cout<<s.top();



    return 0;
}