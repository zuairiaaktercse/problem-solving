#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        int count=1;
        
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(a[i]!=a[i+1])
                {
                    count++;
                }
            }
            if(count==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}