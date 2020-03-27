#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n+1];
    int mark[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mark[i]=0;
    }
    

    for(int i=1;i<=n;i++){
        if(a[i]==i){
            continue;
        }
        int pos=-1;
        for(int j=i+1;j<=n;j++){
            if(a[j]==i){
                pos=j;
                break;
            }
        }
        if(pos==-1){
            continue;
        }
        while(mark[pos-1]==0){  
            if(a[pos-1]<a[pos]){
                
                break;
            }//cout<<i<<" "<<pos<<endl;
            swap(a[pos-1],a[pos]); 
            mark[pos-1]=1;
            if(pos-1==i){
                break;
            }
           
            pos--;
            if(pos==0){
                break;
            }
        }
      


    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


}
}