#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,k;
        cin>>x>>k;

        int n=2;
        int jump_value = x;

        if(x%k != 0)
        {
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else
        {
            while(x%k == 0)
            {
                x--;
            }
            cout<<n<<endl;
            cout<<x<<" "<<(jump_value-x)<<endl;
        }
    }
    return 0;
}