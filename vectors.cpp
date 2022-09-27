#include<iostream>
#include<array>
#include<vector>
using namespace std;



vector<int> fun(){
    vector<int>arr(5,3);
    return arr;
    
}

int main(){

    vector<int> ans = fun();
    for(auto i: ans)
        cout<<i<<" ";
    return 0;
}