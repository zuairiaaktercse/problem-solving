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

        int coin1 = n/3;
        int coin2;
        int remaining_amount = n-coin1;
        
        if(remaining_amount % 2 == 1)
        {
            coin1++;
            coin2 = (n-coin1)/2;
            cout<<coin1<<" "<<coin2<<endl;
        }
        else
        {
            coin2 = remaining_amount/2;
            cout<<coin1<<" "<<coin2<<endl;
        }
    }
    return 0;
}