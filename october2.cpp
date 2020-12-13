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
    /*int N=n,previous = 0;
    int arr[sum(n,q)]={0};
    //cout<<"size of the array : "<<sizeof(arr)/sizeof(arr[0])<<endl;
    for (int i = 0; i < N; i++)
    {
        arr[i] = q[i] - k + previous;
        if(arr[i]<k)
            return i+3;
        previous = arr[i];
    }*/
    //int sum = 0;
   /* int s[sum(n,q)]={0};
    for (int d = 0; d < sum(n,q); d++)
    {
        if(d==0)
        {
            s[d] = q[d]-k;
        q[d] = q[d]-k;
        }
        
        else
        {
            s[d] = q[d]-k+s[d-1];
            q[d] = q[d]-k+s[d-1];
        }
        if(s[d]<0)
        return d+1;  
    }*/
    long long int s = sum(n,q);
    return ((s/k)+1);
}
int main(){
    long long int t;
    cin>>t;
    while(t){
        long long int n,k;
        cin>>n>>k;
        long long int q[n];
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        long long int d = freeDay(n,k,q);
        cout<<d<<endl;
        t--;
    }
    return 0;
}