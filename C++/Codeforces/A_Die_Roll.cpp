#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Y,W;
    cin>>Y>>W;

    int mx = max(Y,W);
    int numerator = 6 - mx + 1;
    int denominator = 6;

    int g = gcd(numerator, denominator);
    numerator = numerator/g;
    denominator = denominator/g;

    cout<<numerator<<"/"<<denominator<<endl;
    return 0;
}