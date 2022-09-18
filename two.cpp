#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>nums){
    if(nums.size() <2 )
        return -1;
    int sum = 0;
    for(int i = nums.size()-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(nums[j]<nums[i])
            {
                int diff = (nums[i] - 48)-(nums[j]-48);
                sum = max(sum,diff);
            }
        }
    }
    if(sum==0)
        return -1;
    return sum;
}

int main(){
    int n;
    cout<<" enter ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int answer = fun(nums);
    cout<<answer;
    return 0;
}