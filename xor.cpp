#include<iostream>
using namespace std;
int main()
{
    int i,n,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"answer is "<<ans<<endl;

    return 0;
}