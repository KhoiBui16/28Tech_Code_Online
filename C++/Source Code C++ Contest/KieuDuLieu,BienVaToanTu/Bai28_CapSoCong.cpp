#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , u1 , d ; cin >> n >> u1 >> d;
    cout << 1ll*n*u1 + 1ll*d*n*(n - 1) / 2 ;
}