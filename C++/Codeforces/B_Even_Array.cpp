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
        int evencount=0, oddcount=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
        }
       
        int wrongposition=0;
        for(int i=0; i<n; i++)
        {
            if((i%2==0 && a[i]%2 != 0) || (i%2 != 0 && a[i]%2==0))
            {
                wrongposition++;
            } 
        }
        
        if(n%2==0 && evencount==oddcount)
        {
            cout<<(wrongposition/2)<<endl;
        }
        else if(n%2==1 && (evencount-1)==oddcount)
        {
            cout<<(wrongposition/2)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}