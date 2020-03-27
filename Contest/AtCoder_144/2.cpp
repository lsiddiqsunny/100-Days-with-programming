#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        int a=i;
        int b=n/i;
        if(a>=1 and a<=9){
        if(b>=1 and b<=9){
        cout<<"Yes"<<endl;
        return 0;
        }
    }

}   
}
cout<<"No"<<endl;
}