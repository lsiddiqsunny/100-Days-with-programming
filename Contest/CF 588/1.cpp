#include<bits/stdc++.h>
using namespace std;
int main(){
int a[4];
int total=0;
for(int i=0;i<4;i++){
    cin>>a[i];
    total+=a[i];
}
sort(a,a+4);

if(a[0]==total-a[0]){
    cout<<"YES"<<endl;
}
else if(a[1]==total-a[1]){
    cout<<"YES"<<endl;
}
else if(a[2]==total-a[2]){
    cout<<"YES"<<endl;
}
else if(a[3]==total-a[3]){
    cout<<"YES"<<endl;
}
else if(a[0]+a[1]==total-a[0]-a[1]){
    cout<<"YES"<<endl;
}
else if(a[0]+a[2]==total-a[0]-a[2]){
    cout<<"YES"<<endl;
}
else if(a[0]+a[3]==total-a[0]-a[3]){
    cout<<"YES"<<endl;
}
else if(a[1]+a[2]==total-a[1]-a[2]){
    cout<<"YES"<<endl;
}

else if(a[1]+a[3]==total-a[1]-a[3]){
    cout<<"YES"<<endl;
}
else if(a[2]+a[3]==total-a[2]-a[3]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}
