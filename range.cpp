#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> nums, int start,int end){
    vector<int>vec;
    for(int i = 0;i<nums.size();i++){
        if(abs(nums[i])>start && abs(nums[i])<end){
            vec.push_back(abs(nums[i]));
        }
    }
    return vec;
}

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0 ;i<n;i++){
        cin>>nums[i];
    }
    int start,end;
    cin>>start>>end;
    vector<int>ans = fun(nums,start,end);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}