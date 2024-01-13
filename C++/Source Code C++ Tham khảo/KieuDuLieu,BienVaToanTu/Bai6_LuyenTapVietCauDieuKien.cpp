#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    // dieu kien 1
    if(n % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 2
    if(n % 3 == 0 && n % 5 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 3
    if(n % 3 == 0 && n % 7 != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 4
    if(n % 3 == 0 || n % 7 == 0) cout <<"YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 5
    if(n > 30 && n < 50) cout << "YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 6
    if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) cout << "YES" << endl;
    else cout <<"NO" << endl;
    // dieu kien 7
    if(n >= 10 && n <= 99 && (n%10 == 2 || n %10 == 3 || n %10 == 5 || n %10 == 7))
    {
        cout <<"YES" << endl;
    }
    else cout <<"NO" << endl;
    // dieu kien 8
    if(n <= 100 && n % 23 == 0) cout << "YES" << endl;
    else cout <<"NO" <<endl;
    // dieu kien 9
    if(n < 10 || n > 20) cout << "YES" << endl;
    else cout << "NO" << endl;
    // dieu kien 10
    if(n % 10 % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}