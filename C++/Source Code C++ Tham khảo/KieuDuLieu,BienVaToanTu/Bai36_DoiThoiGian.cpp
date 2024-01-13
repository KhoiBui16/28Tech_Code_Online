#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n ; cin >> n;
    cout << n / 3600 << "h : " << n%3600/60 << "m : " << n%3600%60 << "s";
}