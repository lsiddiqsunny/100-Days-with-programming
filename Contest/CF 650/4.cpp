#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> fix, int pos, int now, int can, string ans)
{
    int co = 0;
    for (int i = 0; i < fix.size(); i++)
    {
        if (ans[fix[i]] - 'a' == can)
        {
            continue;
        }
        co += abs(fix[i] - pos);
    }
    cout << (char)(can + 'a') << " " << co << " " << now << endl;
    return now <=co;
}
void solve()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int b[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v.push_back(make_pair(b[i], i));
    }
    sort(v.begin(), v.end());
    int a[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
    }
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back('a');
    }
    int can = 25;
    vector<int> fix;
    for (int i = 0; i < v.size(); i++)
    {
        pair<int, int> assign = v[i];
        while (a[can] == 0)
        {

            can--;
            if (can < 0)
            {
                break;
            }
        }

        while (!isPossible(fix, assign.second, assign.first, can, ans))
        {
            can--;
            while (a[can] == 0)
            {
                can--;
                if (can < 0)
                {
                    break;
                }
            }
        }

        ans[assign.second] = can + 'a';
        a[can]--;
        fix.push_back(assign.second);
    }
    cout << ans<<endl;
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