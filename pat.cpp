#include<iostream>
using namespace std;
int main()
{
    int k,i,n,j;
    n=5;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}