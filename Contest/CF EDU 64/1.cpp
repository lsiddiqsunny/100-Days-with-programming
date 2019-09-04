#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long int ans=0;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]==1)
        {
            if(a[i]==2)
            {
                ans+=3;
            }
            else if(a[i]==3)
            {
                ans+=4;
            }

        }

        if(a[i-1]==2)
        {
            if(a[i]==1)
            {
                ans+=3;
            }
            else if(a[i]==3)
            {
                cout<<"Infinite"<<endl;
                return 0;
            }

        }



        if(a[i-1]==3)
        {
            if(a[i]==1)
            {
                ans+=4;
            }
            else if(a[i]==2)
            {
                cout<<"Infinite"<<endl;
                return 0;
            }

        }
    }

    cout<<"Finite\n"<<ans<<endl;

}
