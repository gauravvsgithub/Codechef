#include<iostream>
using namespace std;

long long int sum(long long int n,long long int arr[]){
    long long int s=0;
    for(long long int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

long long int freeDay(long long int n, long long int k, long long int q[])
{
   long long int d = 0,s=0;
    for(int i=0;i<n;i++){
        s += q[i];
        d++;
        s = s-k;
        if(s<0)
            return d;
    }
    if(s>0)
        return (d+(s/k)+1);

}
int main(){
    long long int t;
    cin>>t;
    while(t){
        long long int n,k;
        cin>>n>>k;
        long long int q[n];
        for(long long int i=0;i<n;i++){
            cin>>q[i];
        }
        long long int d = freeDay(n,k,q);
        cout<<d<<endl;
        t--;
    }
    return 0;
}