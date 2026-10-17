#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int height=0;

    int i=1;
    int sum=0;
    while(n>0)
    {
        sum+=i;
        n-=sum;
        if(n>=0)
        {
            height++;
            i++;
        }
        else
        {
            break;
        }
        
    }
    cout<<height<<endl;

}
