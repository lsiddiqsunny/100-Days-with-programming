#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if (n % 2 == 0 and (n == k or n-1 == k))
            cout << "Ayoub"<<endl;
        else
            cout << "Kilani"<<endl;
    }
}


