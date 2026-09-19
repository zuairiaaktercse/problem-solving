#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;
    string s1;
    cin>>s1;

    string s2 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s3 = "";
    if(c=='R')
    {
        for(int i=0; i<s1.size(); i++)
        {
            for(int j=0; j<s2.size(); j++)
            {
                if(s1[i]==s2[j])
                {
                    s3+=s2[j-1];
                }
            }
        }
    }
    else if(c=='L')
    {
        for(int i=0; i<s1.size(); i++)
        {
            for(int j=0; j<s2.size(); j++)
            {
                if(s1[i]==s2[j])
                {
                    s3+=s2[j+1];
                }
            }
        }
    }
    cout<<s3<<endl;
    return 0;
}