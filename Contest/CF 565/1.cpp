#include<bits/stdc++.h>
using namespace std;
int main(){

int q;
cin>>q;
while(q--){
    long long n;
    cin>>n;
    long long two=0,three=0,five=0;
    while(n%2==0){
        two++;
        n/=2;
    }
    while(n%3==0){
        three++;
        n/=3;
    }
    while(n%5==0){
        five++;
        n/=5;
    }
    if(n!=1){
        cout<<-1<<endl;
    }
    else{
        cout<<two+(2*three)+(3*five)<<endl;
    }

}

}
