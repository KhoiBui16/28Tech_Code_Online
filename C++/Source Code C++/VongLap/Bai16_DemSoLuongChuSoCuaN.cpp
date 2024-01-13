#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n ; cin >> n;
	if(n == 0) 
    {
        cout << 1;
        return 0;
    }
	int dem = 0;
	while(n)
	{
		n /= 10;
		++dem;
	}
	cout << dem;
}