#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b; cin>> a >> b;
	long long gt = 1;
	for(int i = 1 ;i <= min(a , b) ; i++)
	{
		gt *= i;
	}
	cout << gt;
}