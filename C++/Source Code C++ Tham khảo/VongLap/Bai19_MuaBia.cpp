#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	int sum = n / 28;
	int ans = sum;
	while(ans >= 3)
	{
		int res = ans / 3;
		ans %= 3;
		sum += res;
		ans += res;
	}
	cout << sum;
}