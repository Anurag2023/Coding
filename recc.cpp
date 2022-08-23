#include<iostream>
using namespace std;

void rec(int n)
{
    if(n==1)
        {
            cout<<n<<" ";
            return;
        }
    //cout<<" B "<<n<<" ";
    rec(n-1);
    cout<< n<<" ";
    
}

int main()
{
    rec(10);
    return 0;
}