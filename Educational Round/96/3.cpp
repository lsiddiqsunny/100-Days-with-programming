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
        cout<<2<<endl;
        int now = n;
        for(int i=n-1;i>=1;i--){
            cout<<i<<" "<<now<<endl;
            now = (now+i+1)/2;
        }
    }
}