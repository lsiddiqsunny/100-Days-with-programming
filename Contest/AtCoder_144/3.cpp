#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
vector<long long int>v;
for(long long int i=1LL;i<=sqrt(n);i++){
    if(n%i==0){
        long long int a=i;
        long long int b=n/i;
            v.push_back(a);
            v.push_back(b);
      
       
    }

}   
sort(v.begin(),v.end());
int pos=v.size()/2-1;
long long int a=v[pos];
long long int b=n/a;
cout<<(a-1)+(b-1)<<endl;
}

