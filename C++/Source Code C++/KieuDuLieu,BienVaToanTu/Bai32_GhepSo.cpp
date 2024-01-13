#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k2 , k3 , k5 , k6 ; cin >> k2 >> k3 >> k5 >> k6;
    cout << min({k2 , k5 , k6}) * 256 + min(k2 - min({k2 , k5 , k6}) , k3) * 32;
}