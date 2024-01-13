#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	long long sum = 0;
	for(int i = 2 ; i <= 2*n ;i += 2)
	{
		sum += i;
	}
	cout << sum;
}