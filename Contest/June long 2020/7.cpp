#include <bits/stdc++.h>
using namespace std;
long long int a, b, c;
long long int x, y, z;
bool zero(){
    if(a==x and b==y and c==z){
        return true;
    }
    return false;
}
bool one(){
    if(a==x and b==y and c!=z){
        return true;
    }
    if(a==x and b!=y and c==z){
        return true;
    }
    if(a!=x and b==y and c==z){
        return true;
    }
    if(a==x ){
        if(b-y == c-z){
            return true;
        }
        if(z*b == y*c){
            return true;
        }
    }
    if(b==y){
        if(a-x == c-z){
            return true;
        }
        if(z*a == x*c){
            return true;
        }
    }
    if(z==c){
        if(a-x == b-y){
            return true;
        }
        if(y*a == x*b){
            return true;
        }
    }
    return false;
}
void solve()
{

    cin >> a >> b >> c >> x >> y >> z;
    if (zero())
    {
        cout<<0<<endl;
        return;
    }
    if (one())
    {
        cout<<1<<endl;
        return;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}