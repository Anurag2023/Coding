#include<iostream>
#include<vector>
#include<numeric>
#include<string>
#include<algorithm>
using namespace std;
int count = 0;

void insert(vector<int>& nums, int temp){
    if(nums.size()==0 || nums[nums.size()-1] <= temp)
    {
        nums.push_back(temp);
        cout<<" i1 ";
        return;
    }
    int ele = nums[nums.size()-1];
    nums.pop_back();
    cout<<" i2 ";
    insert(nums,temp);
    cout<<" i3 ";
    nums.push_back(ele);
}

void sort(vector<int>& nums){
    if(nums.size()==1)
        return;
    int temp = nums[nums.size()-1];
    nums.pop_back();
    cout<<" s1 ";  
    sort(nums);
    cout<<" s2 ";
    insert(nums,temp); 
    cout<<" s3 ";    
}

int main(){
    vector<int>nums{2,6,4,1};  //2,6,4,9,1,3,8,5
    // iota(nums.begin(),nums.end(),1);
    // reverse(nums.begin(),nums.end());
    
    cout<<"before : ";
    for(auto i : nums)
        cout<<i<<" ";
    cout<<endl;
    sort(nums);
    
    cout<<endl<<" after : ";
    for(auto i : nums)
        cout<<i<<" ";
    return 0;
}