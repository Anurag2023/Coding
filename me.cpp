#include<iostream>
using namespace std;
int main(){
    int *arr = new int(5);
    cout<<sizeof(arr)<<" ";
    for(int i = 0; i<5 ;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}