#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==1){
            odd++;
        }
        else even++;

    }
    if(odd and even) sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
