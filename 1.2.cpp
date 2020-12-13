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
	sort(dishTime,dishTime+n);
//	for(int i=0;i<n;i++)
//		cout<<dishTime[i];
	int time=0;
	int i=0,j=n-1;
	while(j>i)
	{
		time += dishTime[i];
		dishTime[i]-=dishTime[i];
		dishTime[j]-=dishTime[i];
		i++;
		if(dishTime[j]<=0)
		{
			j--;
		}
		//cout<<" i:"<<i<<" j:"<<j;
	}
	cout<<endl<<time;
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
