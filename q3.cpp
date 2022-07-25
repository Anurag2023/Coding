#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter array : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mid,l,r;
    if(n%2==0)
        mid = n/2;
    else
        mid = (n/2)+1;
    l=mid-1;
    r=mid+1;
    
    return 0;
}

void loop(int mid,int l,int r,int n){


}