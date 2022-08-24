#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<string>
using namespace std;

int fib(int a)
{
    if(a == 0 || a==1)
        return a;
    int ans = fib(a-1)+fib(a-2);
    return ans;
    
}

int main()
{
    int a = 7;
    cout<<fib(a);
    return 0;
}