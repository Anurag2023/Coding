#include<bits/stdc++.h>
using namespace std;

int fun(string s){
   
    
    stack<char> stack;
    stack.push(s[0]);
    
    for(int i=1;i<s.size();i++)
    {
        if((stack.top()== '8' && s[i] == '9') || (stack.top() == '9' && s[i] == '8'))
            stack.pop();
        else
            stack.push(s[i]);
    }
    int count =0;
    while(!stack.empty())
    {
        stack.pop();
        count++;
    }
    return count;

}

int main(){
    string s;
    cout<<"enter ";
    cin>>s;
    int ans = fun(s);
    cout<<ans;
    return 0;
}