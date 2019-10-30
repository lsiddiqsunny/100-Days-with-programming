#include<bits/stdc++.h>
using namespace std;
// log(n) solution
long long int xnor(long long int a,long long  int b)
{
    // Make sure a is larger
    if (a < b)
        swap(a, b);

    if (a == 0 && b == 0)
        return 1;

    long long int a_rem = 0; // for last bit of a
    long long int b_rem = 0; // for last bit of b

    // counter for count bit
    // and set bit  in xnornum
    long long int count = 0;

    // to make new xnor number
    long long int xnornum = 0;

    // for set bits in new xnor number
    while (a)
    {
        // get last bit of a
        a_rem = a & 1;

        // get last bit of b
        b_rem = b & 1;

        // Check if current two
        // bits are same
        if (a_rem == b_rem)
            xnornum |= (1 << count);

        // counter for count bit
        count++;
        a = a >> 1;
        b = b >> 1;
    }
    return xnornum;
}

int main(){
int t;
cin>>t;
while(t--){
    long long int a,b,n;
    cin>>a>>b>>n;
    long long int f1=a^b;
    long long int f2=b^f1;
    long long int f3=f1^f2;
    long long int f4=xnor(a,b);
    long long int f5=xnor(b,f4);
    long long int f6=xnor(f4,f5);
    if(n%3==0){
        cout<<max(f1,f4)<<endl;
    }
    else if(n%3==1){
        cout<<max(f2,f5)<<endl;
    }
    else{
        cout<<max(f3,f6)<<endl;
    }
}
}

