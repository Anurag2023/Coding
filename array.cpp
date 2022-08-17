#include<iostream>
#include<array>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5>nums = {1,5,3,8,6};
    for(auto i : nums)
        cout<<i<<" ";
    sort(nums.begin(),nums.end());
    cout<<endl;
    for(auto i : nums)
        cout<<i<<" ";
    return 0;
}