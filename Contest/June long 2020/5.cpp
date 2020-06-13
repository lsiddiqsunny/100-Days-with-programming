#include <bits/stdc++.h>
using namespace std;
void spiralMatrix(int rows, int cols)
{

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    int dir = 1;
    int co = 1;
    int arr[rows][cols];

    while (top <= bottom && left <= right)
    {

        if (dir == 1)
        { 
            for (int i = left; i <= right; ++i)
            {
                arr[top][i] = co++;
            }

            ++top;
            dir = 2;
        }
        else if (dir == 2)
        { 
            for (int i = top; i <= bottom; ++i)
            {
                arr[i][right] = co++;
            }

            --right;
            dir = 3;
        }
        else if (dir == 3)
        {
            for (int i = right; i >= left; --i)
            {
                arr[bottom][i] = co++;
            }

            --bottom;
            dir = 4;
        }
        else if (dir == 4)
        { 
            for (int i = bottom; i >= top; --i)
            {
                arr[i][left] = co++;
            }

            ++left;
            dir = 1;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    spiralMatrix(n,n);
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