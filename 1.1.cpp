#include<iostream>
#include<algorithm>
using namespace std;

int displayTime()
{
    int n;
    cin>>n;
    int dish[n];
    for(int i=0;i<n;i++)
    {
        cin>>dish[i];
    }
    sort(dish,dish+n);
    int i=0,j=n-1;
    int time = 0;
    while(i<j)
    {
        dish[i]--;
        dish[j]--;
        if(dish[i]==0) i++;
    
        if(dish[j]==0) j--;
        time++;
    }
    cout<<time;


}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        displayTime();
        t--;
    }
    return 0;
}
