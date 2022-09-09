#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            words.push_back(tmp);

        string ans;
        for (int i = words.size() - 1; i >= 0; --i) {
            if (i != words.size() - 1) ans += " ";
            ans += words[i];
        }
        return ans;
    }

int main()
{
    string s;
    //getline(cin,s);
    cin>>s;
    string ans = reverseWords(s);
    cout<<ans;
    return 0;
}