#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>& s , int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    int ele = s.top();
    s.pop();
    insert(s,temp);
    s.push(ele);
}

void rev(stack<int>& s){
    if(s.size()==1)
        return;
    int temp = s.top();
    s.pop();
    rev(s);
    insert(s,temp);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(8);
    s.push(5);
    s.push(4);
    rev(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}