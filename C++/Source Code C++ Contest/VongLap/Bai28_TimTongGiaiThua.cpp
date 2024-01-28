#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	long long gt = 1 , sum = 0;
	for(int i = 1 ;i <= n ; i++)
	{
		gt *= i;
		sum += gt;
	}
	cout << sum;
}