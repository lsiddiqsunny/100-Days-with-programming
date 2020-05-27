#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        sort(b, b + n);
        reverse(b,b+n);

        int now = 0;
        // 9 8 7 5 3 2
        for (int i = 0; i < n; i++)
        {
            if (b[now] == a[i])
            {
                //cout<<a[now]<<endl;
                for (int j = now; j <= i; j++)
                {
                    if (j != i)
                        printf("%d ", b[j]);
                    else
                    {
                        printf("%d\n", b[j]);
                    }
                    now = i + 1;
                }
            }
            else
            {
                printf("Not possible\n");
            }
        }
    }
}