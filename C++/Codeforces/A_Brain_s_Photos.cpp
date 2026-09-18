#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    int count=0;

    while(n--)
    {
        char a[m];
        for(int i=0; i<m; i++)
        {
            cin>>a[i];
            if(a[i]=='C' || a[i]=='M' || a[i]=='Y')
            {
                count++;
            }
        }
    }
    
    if(count != 0)
    {
        cout<<"#Color"<<endl;
    }
    else 
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}