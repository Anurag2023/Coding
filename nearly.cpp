#include<iostream>
#include<vector>
#include<numeric>
#include<queue>
using namespace std;
int main()
{
    vector<int> nums(9);
    priority_queue<int,vector<int>,greater<int>>minh;
    //iota(nums.begin(),nums.end(),3);
    // for(auto i : nums)
    //     cout<<i<<" ";
    nums = {3,2,6,4,9,8,11,10,12};
    int k = 4;
    int i,j=0;
    for(i=0;i<nums.size();i++)
    {
        minh.push(nums[i]);
        if(minh.size()>k)
        {
            nums[j++] = minh.top();
            minh.pop();
            //cout<<nums[j]<<"  j = "<<j<<" ";
        }
    }
    while(!minh.empty())
    {
        nums[j++] = minh.top();
        //cout<<"hello";
        minh.pop();
    }
    // cout<<minh.top();
    // cout<<endl;
    for(auto a : nums)
        cout<<a<<" ";
    return 0;
}