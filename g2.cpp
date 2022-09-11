#include<bits/stdc++.h>
using namespace std;

int fun(string str){
    stringstream sa(str);
    long long x = 0;
    sa >> x;
    vector<long long> s;
    int sum =0;
    while(x>0){
        int a = x%10;
        //sum = sum*10+a;
        s.push_back(a);
        x/=10;
    }

    stack<long long> stack;
    stack.push(s[0]);
    
    for(int i=1;i<s.size();i++)
    {
        if(stack.top() + s[i] == 17)
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