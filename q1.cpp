#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int fun(vector<int> arr,int n , int armor)
{
    int i,k=0;
    int sum = 0;
    sort(arr.begin(),arr.end());
    i=n-1;
    if(arr[i]<armor) 
        i--;
    else
        {
            sum+=(arr[i]-armor);
            i--;
        }
    while(i>=0){
        sum+=(arr[i--]);
        k = 1;
    }
    if(k==1)
        sum++;
    return sum;
}
int main(){
    int a,i,n,b;
    cout<<"enter size ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elemnts if array ";
    while(i<n) cin>>arr[i++];
    cout<<"enter armor ";
    cin>>a;
    cout<<fun(arr,n,a);

    return 0;
}