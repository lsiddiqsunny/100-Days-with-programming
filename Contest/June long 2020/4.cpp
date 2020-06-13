#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        while (n % 2ll == 0)
        {
            n /= 2ll;
        }
        cout << (n - 1ll) / 2ll << endl;
    }
}