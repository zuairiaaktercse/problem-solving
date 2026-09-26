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

        sort(a, a+n);
        int count = 1;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
            }
        }

        vector<int>b,c;
        if(count==n)
        {
            cout<<"-1"<<endl;
        }
        else if(count<n)
        {
            int first = a[0];
            for(int i=0; i<n; i++)
            {
                if(a[i]==first)
                {
                    b.push_back(a[i]);
                }
                else
                {
                    for(int j=i; j<n; j++)
                    {
                        c.push_back(a[j]);
                    }
                    break;
                }
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0; i<b.size(); i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++)
            {
                cout<<c[i]<<" ";
            }  
        }
        
    }
    return 0;
}