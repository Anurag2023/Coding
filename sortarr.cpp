#include<iostream>
#include<vector>
#include<numeric>
#include<string>
#include<algorithm>
using namespace std;

void fun(vector<int>nums){
    if(nums.size()==1)
        return
}

int main(){
    vector<int>nums(10);
    iota(nums.begin(),nums.end(),1);
    reverse(nums.begin(),nums.end());
    fun(nums);
    return 0;
}