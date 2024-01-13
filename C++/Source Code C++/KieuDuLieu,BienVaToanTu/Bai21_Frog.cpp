#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b , k ; cin >> a >> b >> k;
    cout << (k / 2 + k%2)*a - (k / 2)*b;
}