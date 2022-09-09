#include <iostream>
#include<vector>
#include<numeric>
using namespace std;

long int fun(vector<int> parcels,int k){
    int i=1;
    int sum =0;
    int j=0;
    int count = parcels.size();
    sort(parcels.begin(),parcels.end());
    while(count<k){
        if(i<parcels[j])
        {
            sum+=(i++);
            count++;
        }
        else
            j++;

    }
}

int main(){
    int i,a,k,n;
    cout<<"enter the size of the array ";
    cin>>n;
    vector<int> parcels(n);
    for(i=0;i<n;i++){
        cin>>parcels[i];
    }
    cout<<"enter k ";
    cin>>k;
    long int ans = fun(parcels , k);
    cout<<ans;
    return 0;
}