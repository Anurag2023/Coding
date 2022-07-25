#include<iostream>
using namespace std;
int main()
{
    int n,m,h;
    cout<<"enter no of villan";
    cin>>n ;
    cout<<"enter no of hero";
    cin>>m;
    cout<<"enter health of each hero ";
    cin>>h;
    int vh[n];
    cout<<"enter health of all villans";
    for(int i=0;i<n;i++)
    {
        cin>>vh[i];
    }
    int hh[m];
    for(int k=0;k<m;k++)
    {
        hh[k] = h;
    }
    //cout<<hh[2];
    int i=m-1;
    int j=n-1;
    for(;(i>-1) && (j>-1);)
    {
        if(hh[i]>vh[j])
        {
            hh[i]-=vh[j];
            j--;
        }
        else if(hh[i]<vh[j])
        {
            i--;
        }
        else
        {
            i--;
            j--;
        }
    }
    cout<<"no of villens to remove is : "<<j+1<<endl;


    return 0;
}