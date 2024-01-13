#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a , b , c , d ; cin >> a >> b >> c >> d;
    double tb = a + b + c*2 + d * 3;
    tb /= 7;
    if(tb >= 8) cout << "GIOI";
    else if(tb >= 6.5) cout << "KHA";
    else if(tb >= 5) cout << "TRUNG BINH";
    else cout << "YEU";
}