#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	int ans = 0;
	for(int i = 1 ;i <= n ; i++)
	{
		for(int j = 1 ; j <= n ;j++)
		{
			cout << ans++ << " ";
		}
		cout <<endl;
	}
	cout << endl;
	for(int i= 1 ; i <= n ; i++)
	{
		ans = i;
		for(int j = 1 ; j <= n; j++)
		{
			cout << ans++ << " ";
		}
		cout <<endl;
	}
	cout <<endl;
	for(int i = 1 ;i <= n ;i++)
	{
		for(int j = 1 ; j <= n ;j++)
		{
			if(j >= n - i + 1)
			{
				cout << i ;
			}
			else cout << "~";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1 ;i <=n ;i++)
	{
		ans = i ; int cnt = n - 1;
		for(int j = 1 ; j <= i ; j++)
		{
			cout << ans << " ";
			ans += cnt ; cnt--;
		}
		cout <<endl;
	}
}