#include<iostream>
using namespace std;
int main()
{
    int i,n,k,j,key,c=0,count=0;
    cout<<"enter no of test case : ";
    cin>>k;
    for(i=1;i<=k;i++)
    {
        count = 0,c=0;
        cout<<"enter size : ";
        cin>>n;
        int a[n];
        cout<<"enter key : ";
        cin>>key;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            count++;
            if(a[j]==key)
            {
                cout<<"yes"<<" "<<count<<endl;
                c = 1;
                break;
            }
            
        }
        if(c==0)
        {
            cout<<"no"<<" "<<count<<endl; 
        }
    }
    return 0;
}