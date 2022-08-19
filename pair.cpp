#include<utility>
#include<iostream>
using namespace std;
int main()
{   
    pair<int,int>p;
    p = make_pair(3,5);
    cout<<p.first<<" "<<p.second<<" ";
    pair<int,int>p2;
    p2 = {2,3};
    cout<<p2.first<<" "<<p2.second;

    return 0;
}