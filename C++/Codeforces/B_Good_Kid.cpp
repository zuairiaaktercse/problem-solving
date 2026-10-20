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
        a[0]+=1;

        int max_product=1;
        for(int i=0; i<n; i++)
        {
            max_product*=a[i];
        }
        cout<<max_product<<endl;
    }
    return 0;
}