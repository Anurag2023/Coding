#include<iostream>
#include<vector>
#include<numeric>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

void del(stack<int>& s,int mid){
    if(s.size()==mid)
    {
        s.pop();
        return;
    }
    int ele = s.top();
    s.pop();
    del(s,mid);
    s.push(ele);
}


int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    del(s,3);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}