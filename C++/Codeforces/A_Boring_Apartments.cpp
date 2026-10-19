#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        int last_digit = x%10;
        int digit_count=0;

        while(x!=0)
        {
            x/=10;
            digit_count++;
        }

        int sum=0;
        for(int i=1; i<=digit_count; i++)
        {
            sum+=i;
        }

        int final_ans = (10*(last_digit-1))+sum;
        cout<<final_ans<<endl;
    }
    return 0;
}