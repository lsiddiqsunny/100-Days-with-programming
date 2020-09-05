#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> ans;
        int diff = y - x;
        for (int d = 1; d <= diff; ++d)
        {
            if (diff % d != 0)
                continue;
            vector<int> res;
            bool found = false;
            int cur = y;
            int need = n;
            while (cur >= 1 && need > 0)
            {
                res.push_back(cur);
                found |= cur == x;
                --need;
                cur -= d;
            }
            cur = y;
            while (need > 0)
            {
                cur += d;
                res.push_back(cur);
                --need;
            }
            sort(res.begin(), res.end());
            if (need == 0 && found)
            {
                if (ans.empty() || ans.back() > res.back())
                {
                    ans = res;
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}