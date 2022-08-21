#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>nums={1,3,2,4};
    //nums = {1,3,2,4};
    vector<int>vec;
    stack<int>stack;
    for(auto j : nums)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(stack.empty())
            vec.push_back(-1);
        else if(stack.top()>nums[i])
            vec.push_back(stack.top());
        else if(stack.top()<nums[i])
        {
            while(stack.top()<nums[i] && !stack.empty())
            {
                stack.pop();
            }
            if(stack.empty())
                vec.push_back(56);
            else
                vec.push_back(stack.top());
            
        }
        stack.push(nums[i]);
    }
    reverse(vec.begin(),vec.end());
    for(auto l : vec)
    {
        cout<<l<<" ";
    }
    cout<<endl;
    return 0;
}