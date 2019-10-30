#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    double a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]=log10(a[i])/log10(3.0);
    }
    sort(a,a+n);



}
