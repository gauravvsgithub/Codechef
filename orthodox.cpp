#include<iostream>
using namespace std;
void sumset(int sum[],int i,int n,int N,int arr[])
{
	static int k=0,m=0;
	
	for(int j=0;j<n;j++)
	{
		int sum1=0;
		for(int k=j;k<i;k++)
		{
			sum1=sum1+arr[k];
		}
		sum[m]=sum1;
	}
	for(int z=0;z<N;z++)
	{
		cout<<sum[z];
	}
	return;
}
void orthodox()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int N=(n*(n+1))/2;
		int arr[n],sum[N];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		for(int k=0;k<N;k++)
		{
			sumset(sum,k,n,N,arr);
		}
	}
}
int main()
{
	return 0;
}
