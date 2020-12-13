#include<iostream>
using namespace std;
int isInfected(int n, int k, int x, int y){
    int N = n;
    int i = x;
    while(N)
    {
        if((i+k)%n == y)
        {
            return 1;
        }
        i = (i+k)%n;
        N--;   
       
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int yesNo = isInfected(n,k,x,y);
        if(yesNo == 1){
            cout<<"YES"<<endl;
        }
        else if(yesNo == -1){
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
