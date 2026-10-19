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
        int min_candies=0;
        int lowest_amount_candy=a[0];
        for(int i=1; i<n; i++)
        {
            min_candies+=a[i]-lowest_amount_candy;
        }

        cout<<min_candies<<endl;
    }
    return 0;
}