#include<iostream>
using namespace std;

int rec(int n)
{
    if(n==0)
        return 0;
    cout<<" B "<<n<<" ";
    rec(n-1);
    cout<<" A "<<n<<" ";
    return n;
}

int main()
{
    rec(10);
    return 0;
}