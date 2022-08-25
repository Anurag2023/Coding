#include <iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<char,int>m;
    string s = "anuragchoudhary";
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto u : m)
    {
        cout<<u.first<<" "<<u.second<<endl; 
    }
    return 0;
}