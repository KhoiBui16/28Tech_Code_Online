#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    for(int i = 1 ; i <= n ; i++) cout << i << " ";
    cout << endl;
    for(int i = n ; i >= 0 ; i--) cout << i << " ";
    cout << endl;
    for(int i = 0 ; i <= n ; i+= 2) cout << i<< " ";
    cout << endl;
    for(int i = 1 ; i<= n ; i += 2) cout << i << " ";
    cout << endl;
    for(int i = 0 ; i < n ; i += 4) cout << i << " ";
    cout << endl;
    for(int i = 'a' ; i <= 'a' + n - 1 ; i++) cout << (char)i << " ";
    cout << endl;
    for(int i = 'z' - n + 1 ; i <= 'z' ; i++) cout << (char)i << " ";
}