#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 , a2 , a3 , b1 , b2 , b3 ; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int n ; cin >> n;
    int m = (a1 + a2 + a3)/ 5 + min(1 , (a1 + a2 + a3) % 5);
    int z = (b1 + b2 + b3)/10 + min(1 , (b1 + b2 + b3) % 10);
    if(m + z <= n) cout << "YES";
    else cout << "NO";
}