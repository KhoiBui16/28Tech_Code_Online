#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;
    while (n >= 10) 
    {
        int sum = 0;
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << n << endl;
    return 0;
}
