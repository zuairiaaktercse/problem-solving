#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
        int mn = min(a,b);
        int mx = max(a,b);
        int result = 4*mn*mn;
        
        if((sqrt(result))>=mx)
        {
            cout<<result<<endl;
        }
        else
        {
            cout<<mx*mx<<endl;
        }
        
    }
    return 0;
}