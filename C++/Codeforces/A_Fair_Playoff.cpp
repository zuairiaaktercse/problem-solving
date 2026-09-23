#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s1, s2, s3, s4;
        cin>>s1>>s2>>s3>>s4;

        int mx1 = max(s1,s2);
        int mn1 = min(s1,s2);

        int mx2 = max(s3,s4);
        int mn2 = min(s3,s4);

        if(mx1>=mn2 && mx2>=mn1)
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