#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n;
    int digit = 0 , alpha = 0;
    for(int i = 0 ; i < n ;i++)
    {
        char x ; cin >> x;
        if(isdigit(x)) digit += (x - '0');
        if(isalpha(x)) ++alpha;
    }
    cout << alpha << endl << digit;
}