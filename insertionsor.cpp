#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"enter the size of the array : ";
    int n;
    cin>>n;
    int temp;
    int arr[n];
    cout<<"enter the elements : ";
    for(i=0;i<n;)
    {
        cin>>arr[i++];
    }
    
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        {
            while(arr[j]>temp && j>-1)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}