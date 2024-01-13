#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n ; cin >> n;
    while(n >= 10)
    {
        long long m = n;
        int sum = 0;
        while(m)
        {
            sum += m % 10;
            m /= 10;
        }
        n = sum;
    }
    cout << n;
}