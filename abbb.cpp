#include <iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

int fun(string s)
{
    int i,n;
    int count = 0;
    n = s.length();
    for(i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') ||(s[i]>='1' && s[i]<='9'))
            continue;
        else
            count++;   
    }
    return count;
}

int main(){
    string s;
    cout<<"enter string ";
    getline(cin,s);
    int ans = fun(s);
    cout<<ans;
    return 0;
}