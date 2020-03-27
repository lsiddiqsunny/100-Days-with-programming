#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin>>n;
    int a[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>a[i][j];
        }
    }
    n = (n*(n-1))/2;

    set<pair<int,int> > s;
    for(int i=0;i<10;i++){
        int id = a[i][0];
        for(int j=1;j<10;j++){
            int x = a[i][j];
            pair<int,int> p = make_pair(min(id,x),max(id,x));

            if(s.find(p)==s.end()){
                n--;
                s.insert(p);
            }
        }
    }
    cout<<n<<endl;

}