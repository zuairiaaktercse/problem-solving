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
        int total_wt = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            total_wt+=a[i];
        }

        set<int> s;
        for(int i=0; i<n; i++)
        {
            s.insert(a[i]);
        }

        if(n%2 != 0 && s.size()==1)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            if(total_wt%2 == 0)
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

