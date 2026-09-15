#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    int x=m+1;
    int b[x];
    long long time=0;
    for(int i=0; i<x; i++)
    {
        if(i==0)
        {
            b[0]=1;
        }
        else
        {
            b[i]=a[i-1];
        }
    }

    for(int i=0; i<x-1; i++)
    {
        if(b[i]<b[i+1])
        {
            time+=b[i+1]-b[i];
        }
        else if(b[i]>b[i+1])
        {
            time+=(n-b[i]+b[i+1]);
        }

    }
    cout<<time<<endl;
    return 0;
}