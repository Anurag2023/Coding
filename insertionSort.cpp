#include<iostream>
using namespace std;
int main()
{
    int t,i,k,j,n,temp;
    int c=-1,s=0,t;
    cin>>t;     //enter test case
    for(j=0;j<t;j++)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<n;i++)
        {
            k=i;c++;
            t=arr[i];
            while(arr[k] < arr[k-1] && k>0)
            {
                temp = arr[k-1];
                arr[k-1] = arr[k];
                arr[k] = temp;
                k--;
                s++;
                c++;
            }

        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"comparisions = "<<c<<endl<<"swaps = "<<s;
        
    }

    return 0;
}