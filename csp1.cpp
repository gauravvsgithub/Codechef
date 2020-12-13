#include<iostream>
using namespace std;
int drdoof( int t)
{
		 int n;
		cin>>n;
	    int arr[n];
		for( int j=0;j<n;j++)
		{
			cin>>arr[j];
			if(arr[j]%2==0)
			return -1;
		}
		
	return 1;
}
int main()
{
    int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int d=drdoof(t);
		if (d==1)
		{
			cout<<"yes";
		}
		else
		cout<<"no";
	}
	
	return 0;
}
