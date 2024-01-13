#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c ; cin >> c;
    if(c >= 'A' && c <= 'Z')
    {
        cout << (char)(c + 32);
    }
    else if(c >= 'a' && c <= 'z') 
    {
        cout << (char)(c - 32);
    }
    else cout << c;
}