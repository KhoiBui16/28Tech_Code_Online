#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    for(int i = 1 ; i <= n ; i++) 
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    cout << endl;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ;j <= n ;j++)
        {
            if(i == n || i == 1 || j == 1 || j == n)
            {
                cout << "*";
            }
            else cout << " ";
        }
        cout <<endl;
    }
    cout << endl;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i == n || j == 1 || i == 1 || j == n)
            {
                cout << "*";
            }
            else cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i == n || j == 1 || i == 1 || j == n)
            {
                cout << i << " ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}