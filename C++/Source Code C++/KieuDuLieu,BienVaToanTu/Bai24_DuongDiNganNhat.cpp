#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long d1 , d2 , d3 ; cin >> d1 >> d2 >> d3;
    long long sum = 0;
    if(d1 > d2)
    {
        sum += d2;
        sum += min(d2 + d1 , d3);
        sum += min(d1 , d2 + d3);
    }
    else
    {
        sum += d1;
        sum += min(d2 + d1 , d3);
        sum += min(d2 , d1 + d3);
    }
    cout << sum;
}