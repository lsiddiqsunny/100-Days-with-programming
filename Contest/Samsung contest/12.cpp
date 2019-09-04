#include<bits/stdc++.h>
using namespace std;


#define mx 1500005
int Arr[mx];
int Size[mx];
void initialize(  int N)
{
    for(int i = 0; i<N; i++)
    {
        Arr[ i ] = i ;
        Size[ i ] = 1;
    }
}
int root (int i)
{
    while(Arr[ i ] != i)
    {
        Arr[ i ] = Arr[ Arr[ i ] ] ;
        i = Arr[ i ];
    }
    return i;
}

bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
        return true;
    else
        return false;
}
void weighted_union(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(Size[root_A] < Size[root_B ])
    {
        Arr[ root_A ] = Arr[root_B];
        Size[root_B] += Size[root_A];
    }
    else
    {
        Arr[ root_B ] = Arr[root_A];
        Size[root_A] += Size[root_B];
    }
}
int main(){
int n,q;
cin>>n>>q;
initialize(n);
while(q--){

    int t;
    cin>>t;
    if(t==1){
        int x,y;
        cin>>x>>y;
        weighted_union(x,y);

    }
    else{
        int x;
        cin>>x;
        cout<<Size[find(x)]<<endl;
    }
}

}
