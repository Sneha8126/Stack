#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

string SimplifyPath(string path){
    vector<string>stk;
    for(int idx=0;idx<path.size();idx++){
        char ch = path[idx];
        if(ch=='.'){
            string dots="";
            while(idx<path.size() && path[idx]=='.'){
                dots+='.';
                idx++;
            }
            while(idx<path.size() && path[idx]!='/'){
                dots += path[idx];
                idx++;
            }
            if(dots.size()==2){
                if(stk.size()>0){
                    stk.pop_back();
                }
            }
            else if(dots.size()>=3){
                stk.push_back(dots);
            }
        }
        else if(ch!='/'){
            if(idx>0 && path[idx-1]=='/'){
                stk.push_back("");
            }
            stk[stk.size()-1] += ch;
        }
    }
    string res = "";
    for(string folder : stk){
        res += "/" + folder;
    }
    if(res.size()==0){
        return "/";
    }
    return res;

}

int main() {
    string path;

    cout << "Enter path: ";
    cin >> path;

    cout << "Simplified Path: " << SimplifyPath(path) << endl;

    return 0;
}


bool SimplifyPath(string path){
    vector<string>stk;
    for(int idx=0;idx<=path.size();idx++){
        char ch=path[idx];
        if(ch=='.'){
            string dots = "";
            while(idx>0 && path[idx]=='.'){
            dots += '.';
            idx++;
            }
            while(idx>0 && path[idx]!='/'){
                dots += path[idx];
                idx++;
            }
            if(dots.size()==2){
                stk.pop_back();
            }
            else if(dots.size()>=3){
                stk.push_back(dots);
            }
        }
        else if(ch!='/'){
            if(idx>0 && path[idx-1]=='/'){
                stk.push_back("");
            }
            stk[stk.size()-1] += ch;
        }
    }
    string res = "";
    for(string folder : stk){
        res += "/"+folder;
    }
    if(res.size()==0){
        return "/";
    }
    else{
        return res;
    }
}