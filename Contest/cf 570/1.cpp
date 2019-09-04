#include<bits/stdc++.h>
using namespace std;

int dsum(int n){
int sum=0;
while(n){
    sum+=n%10;
    n/=10;
}
return sum;
}
int main(){

    int a;
    cin>>a;
    for(int i=a;;i++){
        int sum=dsum(i);
        if(sum%4==0){
            cout<<i<<endl;
            return 0;
        }

    }
}
