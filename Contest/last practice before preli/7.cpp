#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],b[k];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int GCD=0;
    for(int i=0;i<k;i++){
    scanf("%d",&b[i]);
        GCD=__gcd(GCD,b[i]);
    }
    bool ok=true;
    int now=a[0]%GCD;

    for(int i=0;i<n;i++){
        if(a[i]%GCD!=now){
            ok=false;
        }
    }
    if(ok){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}

