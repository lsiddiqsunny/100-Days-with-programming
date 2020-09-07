#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            char ch = '?';

            for (int j = i; j < n; j += k)
            {
                if (ch == '?')
                {
                    if (s[j] == '1')
                    {
                        ch = '1';
                    }
                    else if (s[j] == '0')
                    {
                        ch = '0';
                    }
                    else
                    {
                        continue;
                    }
                }
                if (s[j] == '1' and ch == '0')
                {
                    ok = false;
                    break;
                }
                if (s[j] == '0' and ch == '1')
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
            {
                break;
            }

            for (int j = i; j < n; j += k)
            {
                s[j] = ch;
            }
        }
        if (!ok)
        {
            cout << "NO\n";
            continue;
        }
        int one = 0, zero = 0, q = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else if (s[i] == '1')
            {
                one++;
            }
            else
            {
                q++;
            }
        }
        int maxi = max(one, zero), mini = min(one, zero);
        int diff = maxi - mini;
        if (q == 0)
        {
            if (diff != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            if (q < diff)
            {
                cout << "NO\n";
            }
            else
            {
                diff = q - diff;
                if (diff % 2 == 1)
                {
                    cout << "NO\n";
                }
                else
                {
                    cout << "YES\n";
                }
            }
        }
    }
}