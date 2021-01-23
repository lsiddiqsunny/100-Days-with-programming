#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-2;i>=max(0,n-k-1);i--){
            a[n-1]+=a[i];
            a[i]=0;
        }
        cout<<a[n-1]-*min_element(a,a+n)<<endl;
    }
}