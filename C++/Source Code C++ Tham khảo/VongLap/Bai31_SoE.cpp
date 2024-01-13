#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n ; cin >> n;
	double sum = 0;
	for(int i = 0 ;i <= n ;i++)
	{
		ll gt = 1;
		for(int j = 1 ; j <= i ; j++) gt *= j;
		sum += 1.0/gt;
	}
	cout << fixed << setprecision(2) << sum;
}