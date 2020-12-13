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
	int time=0;
	if(n>=3) 
	{
		
		
		int burner1=0,burner2=0;
		int i=n-1;
		while(i>0)
		{
			if(burner1==0)
			{
				burner1=dishTime[i--];
			}
			if(burner2==0)
			{
				burner2=dishTime[i--];
			}
			if(burner1>burner2)
			{
				time+=burner2;
				burner1-=burner2;
				burner2-=burner2;	
			}
			else if(burner1<=burner2)
			{
				time+=burner1;
				burner2-=burner1;
				burner1-=burner1;	
			}
		}
		if(i==0)
		{
			if(burner1>burner2)
			{
				time+=burner2;
				burner1-=burner2;
				burner2-=burner2;	
			}
			else if(burner1<=burner2)
			{
				time+=burner1;
				burner2-=burner1;
				burner1-=burner1;	
			}
			time+=dishTime[0];
		}
	}
	else if(n==2)
	{
		int burner1=dishTime[1];
		int burner2=dishTime[0];
		if (burner1>burner2)
		{
			time+=burner2;
			burner1-=burner2;
			burner2-=burner2;
			time+=burner1;
		}
		else
		{
			time+=burner1;
			burner2-=burner1;
			burner1-=burner1;
			time+=burner2;
		}
	}
	else if(n==1)
	{
		time+=dishTime[0];
	}
	cout<<time<<endl;
	
	
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
