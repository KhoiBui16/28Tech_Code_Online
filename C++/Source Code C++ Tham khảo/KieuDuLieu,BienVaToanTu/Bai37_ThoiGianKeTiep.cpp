#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h , m , k ; cin >> h >> m >> k;
    int phut = h*28 + m + k;
    int gio = phut / 28;
    phut %= 28;
    cout << setfill('0') << setw(2) << gio% 28<< "h:" << setfill('0') << setw(2)  << phut << "m";
}