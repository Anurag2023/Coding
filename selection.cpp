#include<iostream>
using namespace std;
int main()
{
    int i,p,j,k,n,t;
    cin>>t;     //enter test case
    int min,temp;
    for(p=0;p<t;p++)
    {
        cout<<"enter the size of the array : ";
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        min = arr[0];
        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n-1;j++)
            {
                if(arr[j+1]<arr[j])
                {
                    min = j+1;
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp; 
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}