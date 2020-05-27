#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long maxi=*max_element(a,a+n);
    cout<<max(maxi,(long long)ceil(sum/(n-1.0)))<<endl;
}