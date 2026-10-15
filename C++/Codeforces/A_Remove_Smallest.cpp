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

        set<int>s;
        for(int i=0; i<n; i++)
        {
            s.insert(a[i]);
        }

        int count=0;
        if(s.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            auto it = s.begin();
            auto next_it = it;
            next_it++;

            while(next_it != s.end())
            {
                if(*next_it-*it == 1)
                {
                    count++;
                }
                it++;
                next_it++;
            }
           
            if(count==s.size()-1)
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