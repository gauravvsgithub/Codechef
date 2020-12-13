# include<iostream>
# include<algorithm>
using namespace std;
void displayTime()
{
	int n;
	cin>>n;
	int dishTime[n]; 
	for(int i=0;i<n;i++)
		cin>>dishTime[i];
	sort(dishTime,dishTime+n,greater<int>());
	int a=0,b=0,ans;
	if(n>1)
	{
		for(int i=0;i<n;i++)
		{
			if(a>b)
			{
				b=b+dishTime[i];
			}
			else
			{
				a=a+dishTime[i];
			}
		}
		ans=max(a,b);
	}
	else
	{
		ans=dishTime[0];
	}
	cout<<ans<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		displayTime();
	}
	return 0;
}
