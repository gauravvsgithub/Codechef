#include<iostream>
using namespace std;
long int solvetwo()
{
	long int min=-1;
	long int n,k;
	int count=0,idx;
	cin>>n>>k;
	long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{	
		if (arr[j]!=0) 
		{
			if( (k>arr[j]) && (k%arr[j]==0))
			{	if(count==0)
				{
					min = k/arr[j];
					idx=j;
					count++;
				}
				if(k/arr[j]<min)
				{
					min = k/arr[j];	
					idx=j;
				}
				
			}	
		}					
	}
if (count==0)
{
	return -1;
}
else 
{
	return arr[idx];
}

}
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		long int s = solvetwo();
		cout<<s;
		t--; 	
	}
	return 0;
}
