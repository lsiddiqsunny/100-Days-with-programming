#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    bool ok = false;

    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        string rem = s[0];

        for (char c = 'a'; c <= 'z'; c++)
        {
            rem[i] = c;
            bool found = true;
            for (int j = 0; j < n; j++)
            {
                int co = 0;
                for (int l = 0; l <= m; l++)
                {
                    if (rem[l] != s[j][l])
                    {
                        co++;
                    }
                }
                if (co > 1)
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                cout << rem << endl;
                return;
            }
        }
    }

    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}