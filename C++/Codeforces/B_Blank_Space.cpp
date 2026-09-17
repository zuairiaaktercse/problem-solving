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
        int blank_space=0;
        int count=0;
        int mx;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                count++;
            }
            else
            {
                if(count>=blank_space)
                {
                    blank_space = count;
                }
                count = 0;
                
            }
            if(count>=blank_space)
                {
                    blank_space = count;
                }
        }
        cout<<blank_space<<endl;
    }
    return 0;
}