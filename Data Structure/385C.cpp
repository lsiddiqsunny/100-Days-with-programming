#include<bits/stdc++.h>
using namespace std;
#define M 10000000+7
bool marked[M];
int pre[M];
int co[M];
vector<int>prime;

void sieve(int n) {

  for (int i = 2; i  <= n; i++) {
    if (marked[i] == false) { // i is a prime
      for (int j = 2*i ; j <= n; j =j+i) {
        marked[j] = true;
      }
    }
  }
  for(int i=2;i<=n;i++){
      if(marked[i]==false){
          prime.push_back(i);
      //    cout<<i<<" ";
      }
  }
}
int main(){
    sieve(10000000);
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        co[a[i]]++;
     //   cout<<a[i]<<endl;
    }

    for (int i = 0; i  < prime.size(); i++) {
    int co1=0;
    for (int j = prime[i] ; j <= 10000000; j=j+prime[i]) {
        co1+=co[j];
      //  cout<<j<<endl;
    }
    pre[prime[i]]=co1;
   // cout<<co1<<endl;
    }
    for(int i=1;i<=10000000;i++){
      pre[i]+=pre[i-1];
    }
    int m;
    scanf("%d",&m);
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        if(r>10000000) r=10000000;
        if(l>10000000) {
            printf("0\n");
            continue;
        }
    
        int ans=pre[r]-pre[l-1];
        printf("%d\n",ans);
    }

}