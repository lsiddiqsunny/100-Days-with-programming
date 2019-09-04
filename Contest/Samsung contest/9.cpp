#include<bits/stdc++.h>
using namespace std;
#define mx     1000000

int ans[mx+5];

int main(void)
{


    for (int i=0; i <= mx; i++)
        ans[i] = i;

    for (int i=1; i < mx; i++)
    {
        int score = ans[i] + 1;
        int limit;

        if (ans[i+1] > score)
            ans[i+1] = score;
        if (i > sqrt(mx))
            limit = mx;
        else
            limit = i*i;
        for (int j = 2*i; j <= limit; j += i)
        {
            if (ans[j] > score)
                ans[j] = score;
        }
    }

    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
