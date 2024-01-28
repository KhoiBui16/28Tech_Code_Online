#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n ; cin >> n;
	for(int i = 1 ; i <= sqrt(n) ; i++)
	{
		cout << 1ll*i*i << " ";
	}
}