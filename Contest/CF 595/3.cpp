#include<bits/stdc++.h>
using namespace std;
long long three[50];


long long solve(long long  n)
{
    if(n==1)
        return 1;

    int pos=0;
    while(three[pos]<n)
        pos++;

    if(three[pos]==n)
        return n;

    if(n*2>three[pos]-1)
        return three[pos];
    return three[pos-1]+solve(n-three[pos-1]);

}
int main()
{
    int q;
    cin>>q;
    three[0]=1;
    for(int i=1; i<=(18.0/log10(3.0))+2; i++)
    {
        three[i]=three[i-1]*3;
        //  cout<<three[i]<<endl;
    }
    int sz=(18.0/log10(3.0))+2;

    while(q--)
    {

        long long int n;
        cin>>n;

        cout<<solve(n)<<endl;


    }


}

