#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c = 1;
    while(t--){
        string s,f;
        cin>>s>>f;
        int count =0;
        int i = 0;
        for(i=0;i<s.length();i++)
        {
            count+=(s[i]-f[0]);
        }
        cout<<"Case #"<<c++<<": "<<count<<endl;
    }
    return 0;
}