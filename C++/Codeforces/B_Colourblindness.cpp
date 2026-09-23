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

        string a,b;
        cin>>a>>b;
        int count1=0, count2=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]=='R' || b[i]=='R')
            {
                count1++;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]=='R' && b[i]=='R')
            {
                count2++;
            }
        }

        if(count1==count2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}