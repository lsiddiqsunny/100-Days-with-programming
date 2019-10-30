#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g;
    cin >> g;
    for(int cs = 0; cs < g; cs++)
    {
        int n,m,x
        cin >> n >> m >> x;

        vector<int> a;
        for(int i = 0; i <n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }

        vector<int> b;
        for(int i =0; i <m; i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }

        int sum=0,co=0,temp=0,i=0,j=0;

        while(i<n && sum+a[i]<=x)
        {
            sum+=a[i];
            i++;
        }
        co=i;

        while(j<m && i>=0)
        {
            sum+=b[j];
            j++;
            while(sum>x && i>0)
            {
                i--;
                sum-=a[i];
            }
            if(sum<=x && i+j>co)
                co=i+j;
        }
        cout<<co<<endl;
    }
    return 0;
}
