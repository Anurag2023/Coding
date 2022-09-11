#include<bits/stdc++.h>
using namespace std;

void fun(int a){
    if(a == 0)
        return;
    cout<<a<<", ";
    fun(a-1);
    cout<<a<<" ";
}

int main(){
    int a = 10;
    fun(a);
    return 0;
}