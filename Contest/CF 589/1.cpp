#include<bits/stdc++.h>
using namespace std;
bool ok(int x){
set<int>s;
int co=0;
while(x){
    s.insert(x%10);
    co++;
    x/=10;

}
if(co==s.size()){
    return true;
}
else return false;



}

int main(){

int l,r;
cin>>l>>r;

for(int i=l;i<=r;i++){
    if(ok(i)){
        cout<<i<<endl;
        return 0;
    }

}
cout<<-1<<endl;
}
