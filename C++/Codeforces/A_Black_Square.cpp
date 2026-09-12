#include<bits/stdc++.h>
using namespace std;

int main()
{
    int result=0;
    int a[4];
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            result+=a[0];
        }
        else if(s[i]=='2')
        {
            result+=a[1];
        }
        else if(s[i]=='3')
        {
            result+=a[2];
        }
        else if(s[i]=='4')
        {
            result+=a[3];
        }
    }
    cout<<result<<endl;
    return 0;

}