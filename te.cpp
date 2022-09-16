#include<iostream>
#include<queue>
#include<vector>
#include<numeric>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    priority_queue<int> maxh;
    vector<int>nums(10);
    iota(nums.begin(),nums.end(),1);
    for(int i = 0 ; i<nums.size();i++)
    {
        maxh.push(nums[i]);
    }
    while(!maxh.empty()){
        //int a = 
        cout<<maxh.top()<<" ";
        maxh.pop();
    }

    return 0;
}