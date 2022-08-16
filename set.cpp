#include<iostream>
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

    return 0;
}