#include <bits/stdc++.h>
using namespace std;
int a[55][55];
int n, m;

bool claim(int x, int y)
{
    if (a[x][y] == 1)
    {
        return false;
    }
    for (int i = 0; i < m; i++)
    {
        if (a[x][i])
        {
            return false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][y])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int turn = 1;
    while (true)
    {

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (claim(i, j))
                {
                    a[i][j] = 1;
                    turn *= -1;
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                break;
            }
        }
        if (!ok)
        {
            break;
        }
    }
    if(turn==-1){
        cout<<"Ashish\n";
    }
    else{
        cout<<"Vivek\n";
    }
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