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
        int cow, chicken;

        if(n<4)
        {
            cout<<"1"<<endl;
        }

        else
        {
            cow = n/4;
            chicken = (n%4)/2;

            cout<<cow+chicken<<endl;
        }
    
    }
    return 0;
}