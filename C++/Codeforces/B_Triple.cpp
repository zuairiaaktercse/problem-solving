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
        int count=1;
        int maxcount=1;
        int number;

        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
            }
            else
            {
                if(count>maxcount)
                {
                    maxcount = count;
                    number = a[i];
                }
                count = 1; 
            }
            
        }
        
        if(count>maxcount)
        {
            maxcount = count;
            number = a[n-1];
        }
        if(maxcount>=3)
        {
            cout<<number<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}