#include<bits/stdc++.h>
using namespace std;

const long long  int mod= 1000000007;
struct Room {
    long long int l, h;

};


int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin>>test;
    for (int cs=1; cs<=test; cs++)
    {
        int n, k;
        long long w;
        cin>>n>>k>>w;
        long long int l[k];
        for (int i=0;i<k;i++) {
            cin>>l[i];
        }
        long long al, bl, cl, dl;
        cin>>al>>bl>>cl>>dl;

        long long int h[k];
        for (int i=0;i<k;i++) {
            cin>>h[i];
        }
        long long ah, bh, ch, dh;
        cin>>ah>>bh>>ch>>dh;
        Room room[n];
        for (int i=0;i<k;i++) {
            room[i].h=h[i];
            room[i].l=l[i];
        }
        for (int i=k;i<n;i++) {
            room[i].l = 1+((al*l[i-2]+bl*l[i-1]+cl)%dl);
            room[i].h = 1+((ah*h[i-2]+bh*h[i-1]+ch)%dh);
        }
        long long ans=1;
        long long p=0;

        for (int i=0;i<n;i++) {
            if (i==0) {
                
                p=2*(w+room[i].h);
                p+=mod;
                p%=mod;
                ans=(ans%mod*p%mod)%mod;
                cout<<0<<" "<<p<<" "<<ans<<endl;
            }
            else if (room[i].l>room[i-1].l+w) {
                
                p+=2*(w+room[i].h);
                p+=mod; p%=mod;
                ans=(ans%mod*p%mod)%mod;
                cout<<1<<" "<<p<<" "<<ans<<endl;
            }
            else if (room[i].h<=room[i-1].h) {

                p+=(2*(room[i].l-room[i-1].l));
                p+=mod;
                p%=mod;
                ans=(ans%mod*p%mod)%mod;
                cout<<2<<" "<<p<<" "<<ans<<endl;
            }
            else {
                p+=(2*(room[i].l-room[i-1].l)+2*(room[i].h-room[i-1].h));
                p+=mod;
                p%=mod;
                ans=(ans%mod*p%mod)%mod;
                cout<<3<<" "<<p<<" "<<ans<<endl;
            }
            

        }

        cout<<"Case #"<<cs<<":"<<ans<<endl;
    }

}

