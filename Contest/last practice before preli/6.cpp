#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ans=0.0;
    for(int i=1;i<=n;i++){
        ans+=((i*1.0)*((i-1)/(1.0*n)));
      ///  printf("%.10f\n",ans);

    }
    printf("%.10f\n",ans);

}

