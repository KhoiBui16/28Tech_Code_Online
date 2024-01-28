#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	long long sum = 1;
	for(int i = 1 ; i <= sqrt(n) ; i++)
	{
		if(n % i == 0)
		{
			sum *= i;
			if(n/ i != i) sum *= (n / i);
		}
	}
	cout << sum;
}