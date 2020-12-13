#include<iostream>
using namespace std;
int drdroof()
{
	long int n;
	cin>>n;
	long int arr[n];
	int temp=1;
	for (long int k=0;k<n;k++)
	{
		cin>>arr[k];
		if(arr[k]%2==0)
		temp= 0;
	}
if temp==1;

}
int main()
{	
	long int t;
	cin>>t;
	for(long int i=0;i<t;i++)
	{
		int e = drdroof() ;
		if (e==-1)
		{
			cout<<"no";
		}
		else if( e==1)
		cout<<"yes";
		
	}
	return 0;
}
