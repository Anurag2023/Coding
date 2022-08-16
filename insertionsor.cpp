#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
void shift(int arr[] , int i , int j )
{
        int temp = arr[i];        
        while(i!=j)
        {
            arr[i] = arr[i-1];
            i--; 
        }
        arr[j] = temp;
}
int main()
{
    int a,b,c,i,j;
   // vector<int> arr;
    int n=0;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=1;i<n;i++)
    {
        j=i-1;        
        while(arr[j]>arr[i] && j>-1)
            j--;
        shift(arr,i,j+1);
    }

    for(auto k : arr)
        cout<<k<<" ";
    return 0;
}