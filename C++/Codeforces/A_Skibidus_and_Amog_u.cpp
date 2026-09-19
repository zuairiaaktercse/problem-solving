#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string W;
        cin>>W;

        int len = W.size();
        W.erase((len-2), 2);

        W.push_back('i');
        cout<<W<<endl;
    }

    return 0;
}