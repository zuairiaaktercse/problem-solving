#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int n=s.size();
        int half_len=n/2;
        int match_count=0;
        if(n%2==0)
        {
            for(int i=0; i<half_len; i++)
            {
                if(s[i]==s[i+half_len])
                {
                    match_count++;
                }
            }
            if(match_count==half_len)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}