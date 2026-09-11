#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, a+n);
    int count1=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            count1++;
        }
        else{
            count1+=1;
            break;
        }
    }
    
    int count2 = n-count1;
    if(count1>count2)
    {
        cout<<a[0]<<endl;
    }
    else
    {
        cout<<a[n-1]<<endl;
    }
    return 0;
}