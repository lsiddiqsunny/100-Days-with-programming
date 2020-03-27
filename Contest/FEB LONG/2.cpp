#include<bits/stdc++.h>
using namespace std;
int main(){

    int test;
    scanf("%d",&test);
    while(test--){
        int n,q;
        scanf("%d%d",&n,&q);
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            int y =__builtin_popcount (x);
            if(y%2==1){
                odd++;
            }
            else even++;
        }
        while(q--){
            int x;
            scanf("%d",&x);
            int y = __builtin_popcount (x);
            if(y%2==0){
                printf("%d %d\n",even,odd);
            }
            else{
                printf("%d %d\n",odd,even);
            }
        }
    }
}