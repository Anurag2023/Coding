#include<iostream>
#include<vector>
#include<numeric>
#include<string>
#include<algorithm>
using namespace std;
void solve(string ip, string op){
    if(ip.empty())
    {
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);   
    solve(ip,op2);
    solve(ip,op1);
}

void del(string ip){
    ip.erase(ip.begin(),ip.begin()+2);
    cout<<ip<<" ";
}

int main(){
    string ip ="abcde";
    string op =" ";
    solve(ip,op);
    del(ip);
    return 0;
}