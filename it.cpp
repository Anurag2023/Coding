#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(6);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    for(auto it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto& it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << endl;
}
    return 0;
}