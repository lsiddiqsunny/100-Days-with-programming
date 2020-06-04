#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        int g[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        sort(g, g + n);
        bool ok = true;
        if (b[0] < g[0])
        {
            vector<int> ans;
            int now = b[0];
            for (int i = 0; i < n; i++)
            {
                if (now <= b[i])
                {
                    now = b[i];
                }
                else
                {
                    ok = false;
                }
                if (now <= g[i])
                {
                    now = g[i];
                }
                else
                {
                    ok = false;
                }
            }
        }
        else if (g[0] < b[0])
        {
            int now = g[0];
            for (int i = 0; i < n; i++)
            {
                if (now <= g[i])
                {
                    now = g[i];
                }
                else
                {
                    ok = false;
                }
                if (now <= b[i])
                {
                    now = b[i];
                }
                else
                {
                    ok = false;
                }
            }
        }
        else
        {
            int now = b[0];
            for (int i = 0; i < n; i++)
            {
                if (now <= b[i])
                {
                    now = b[i];
                }
                else
                {
                    ok = false;
                }
                if (now <= g[i])
                {
                    now = g[i];
                }
                else
                {
                    ok = false;
                }
            }
            if (!ok)
            {
                ok = true;
                now = g[0];
                for (int i = 0; i < n; i++)
                {
                    if (now <= g[i])
                    {
                        now = g[i];
                    }
                    else
                    {
                        ok = false;
                    }
                    if (now <= b[i])
                    {
                        now = b[i];
                    }
                    else
                    {
                        ok = false;
                    }
                }
            }
        }
        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}