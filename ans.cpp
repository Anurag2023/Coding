#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<&arr<<" ";
    cout<<arr<<" ";
    cout<<&arr+1<<" ";
    cout<<*arr<<" ";
    cout<<*(&arr)<<" ";
    
    return 0;
}