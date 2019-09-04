#include<bits/stdc++.h>
using namespace std;

vector<int>primes;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else two++;
    }
    if(one==0){
        for(int i=0;i<two;i++){
            cout<<2<<" ";
        }
    }
    else if(two==0){
        for(int i=0;i<one;i++){
            cout<<1<<" ";
        }

    }
    else{

        one--;
        two--;
        cout<<2<<" "<<1<<" ";
        for(int i=0;i<two;i++){
            cout<<2<<" ";
        }
        for(int i=0;i<one;i++){
            cout<<1<<" ";
        }


    }

}
