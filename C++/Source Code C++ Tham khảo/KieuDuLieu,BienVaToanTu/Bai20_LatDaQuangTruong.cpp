#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m , n , a ; cin >> m >> n >> a;
    long long t1 = m / a;
    long long t2 = n / a;
    if(m % a != 0) t1 += 1;
    if(n % a != 0) t2 += 1;
    cout << t1 * t2;
}