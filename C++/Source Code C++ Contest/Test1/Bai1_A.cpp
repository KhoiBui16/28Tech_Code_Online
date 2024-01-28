#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin >> n;
    int sum = 0;
    while(n)
    {
        if(n %10%2 == 0) sum += n % 10;
        n /= 10;
    }
    cout << (int)abs(sum);
}