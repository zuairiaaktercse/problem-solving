#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int op1,op2,r;

    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {
        r = n%10;
        op1 = n/10;
        op2 = (n/100)*10 + r;
        if(op1>op2)
        {
            cout<<op1<<endl;
        }
        else
        {
            cout<<op2<<endl;
        }
    }
    return 0;
}