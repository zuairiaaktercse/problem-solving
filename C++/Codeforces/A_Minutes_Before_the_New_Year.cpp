#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int h,m;
        cin>>h>>m;

        int remaining_min = 60-m;
        int remaining_hr = 24-(h+1);

        int total_min = (remaining_hr*60)+remaining_min;
        cout<<total_min<<endl;
    }
    return 0;
}