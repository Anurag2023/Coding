#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   
    int i;
    vector<int> arr(6);
    arr = {5,3,8,4,6,7};
    priority_queue<int,vector<int>,greater<int>> minh(arr.begin(),arr.end());//min heap
    priority_queue<int>maxh(arr.begin(),arr.end()); // max heap
    
    
    for(i=0;i<6;i++)
    {
        cout<<minh.top()<<" ";  // min heap
        minh.pop();
    }
    cout<<endl;
    for(i=0;i<arr.size();i++)
    {
        cout<<maxh.top()<<" ";  // max heap
        maxh.pop();
    }


    return 0;
}