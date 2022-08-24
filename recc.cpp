#include<iostream>
#include<vector>
#include<vector>
#include<map>
#include<queue>
#include<string>
using namespace std;
int main()
{
    vector<int>vec;
    vec = {4,3,6,8,3,5,4,4,5};
   // cout<<vec[3];
    map<int,int>m;
    for(int i=0;i<vec.size();i++)
    {
        m[vec[i]]++;
    }
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    map<int,int>ma;
    for(auto i : m)
    {
        ma[i.second] = i.first;
    }
    for(auto i : ma)
    {
        cout<<"  ma "<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}