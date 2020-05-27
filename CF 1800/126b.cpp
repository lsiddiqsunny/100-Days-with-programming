#include <bits/stdc++.h>
using namespace std;
vector<int> prefix_function(string s)
{
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
int main()
{

    string s;
    cin >> s;
    vector<int> p = prefix_function(s);
    int n = s.size();

    int m = n;
    int x = p[n - 1];
    while (m--)
    {
        if (x==0)
        {
            cout << "Just a legend\n";
            return 0;
        }

        for (int i = 0; i < n - 1; i++)
        {
           // cout << p[i] << " ";
            if (x == p[i])
            {
                cout << s.substr(0, x) << endl;
                return 0;
            }
        }
        x = p[x-1];
    }
}