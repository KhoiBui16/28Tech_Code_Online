#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m , n ; cin >> m >> n;
    long long sum = m / 2 * n + (m % 2)*(n / 2);
    cout << sum;
}