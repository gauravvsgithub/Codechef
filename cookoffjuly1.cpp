#include<iostream>
using namespace std;
int eventual(char arr[],int n)
{

		//cout<<arr;
		for(int k=0;k<n;k++)
		{
			int count=0;
			for(int j=0;j<n;j++)
			{
				if(arr[k]==arr[j])
				count++;
			}
			//cout<<count;
			if (count%2!=0)
			{
				return -1;
			}	
		}	
	return 1;
}
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		char arr[n];
		cin>>arr;
	int e=eventual(arr,n);
	//cout<<e;
	if (e==-1)
	cout<<"NO"<<endl;
	else if(e==1)
	cout<<"YES"<<endl;
	}
	return 0;
}
