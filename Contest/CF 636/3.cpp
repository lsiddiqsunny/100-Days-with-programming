#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int turn =1;
        if(a[0]<0){
            turn=-1;
        }
        long long int mini = INT_MIN;
        long long int maxi = INT_MIN;
        long long sum = 0;
        if(turn==1){
            maxi=a[0];
        }
        else{
            mini=a[0];
        }
        for(int i=0;i<n;i++){
            if(turn == 1 ){
                if(a[i]<0){
                    turn = -1;
                    sum+=maxi;
                    maxi=INT_MIN;
                    mini=a[i];
                }
                else{
                    maxi=max(maxi,a[i]);
                }
            }
            else{
                if(a[i]>=0){
                    turn = 1;
                    sum+=mini;
                    mini=INT_MIN;
                    maxi=a[i];
                }
                else{
                    mini=max(mini,a[i]);
                }
            }
        }

        if(turn==1){
            sum+=maxi;
        }
        else{
            sum+=mini;
        }

        cout<<sum<<endl;

    }

}