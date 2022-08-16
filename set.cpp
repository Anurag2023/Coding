#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    set<int> arr;
    arr = {4,6,8,2,3,3,3,6,9};
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
    
    // insertion
    vector<pair<int,bool>> vec;
    cout<<endl;
    arr.insert(69);
    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}