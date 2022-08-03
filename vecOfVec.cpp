#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> a
    {
        {1,2,3},{4,5,6,7,8},{11,12},{14,15,16,17,18,19},{20}
    };
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}