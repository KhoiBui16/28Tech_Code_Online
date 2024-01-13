#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , c , n ; cin >> a >> b >> c >> n;
    int m = max({a , b , c});
    int k = min({a , b , c});
    int z = (a + b + c) - m - k;
    if((n - (m - k) -(m- z)) > 0 &&  (n - (m - k) -(m- z))% 3 == 0) cout << "YES";
    else cout << "NO";
}