#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s = {1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        cout<<s.top()<<" ";
    }
    cout<<endl;
    


    return 0;
}