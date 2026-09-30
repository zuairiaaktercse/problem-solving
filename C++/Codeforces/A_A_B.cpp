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

        int sum=0;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<=9; j++)
            {
                if(s[i]-'0'==j)
                {
                    sum+=j;
                }
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}