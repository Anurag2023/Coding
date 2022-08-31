#include<iostream>
using namespace std;
int main()
{
	int nums[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j=0;
	for(i=0;i<3;i++)
	{
		if(j==0){
			{
				while(j<3)
				{
					cout<<nums[j++][i]<<" ";
				}
			}
		}
		cout<<endl;
		if(j>0)
		{
			while(j>=0)
			{
				cout<<nums[j--][i]<<" ";
			}
		}
		cout<<endl;
	}


	return 0;
}