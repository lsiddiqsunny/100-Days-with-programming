#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[2*n];
    long long int first=0;
    long long int last=0;
    for(int i=0; i<2*n; i++)
    {
        cin>>a[i];
        if(i<n)
            first+=a[i];
        else
            last+=a[i];
    }
    int pos=-1;
    int i=0;
    for( i=0; i<2*n-1; i++)
    {

        if(a[i]!=a[i+1]){
            pos=1;
        }

    }


    if(pos==-1)
    {
        cout<<pos<<endl;
        return 0;
    }
    sort(a,a+2*n);
    for(int i=0; i<2*n; i++)
    {
        cout<<a[i]<<" ";
    }


}
