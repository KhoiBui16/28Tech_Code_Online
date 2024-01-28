#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ,c  ; cin >> a >> b >> c;
    int ans = min({a , b , c});
    int res = max({a , b , c});
    cout << ans << " " << (a + b + c) - ans - res << " " << res;
}