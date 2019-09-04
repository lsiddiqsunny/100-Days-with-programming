#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int sum1=0,sum2=0,sum3=0;
    vector<int>v1,v2,v3;
    for(int i=0; i<n1; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        sum1+=x;
    }
    for(int i=0; i<n2; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
        sum2+=x;
    }

    for(int i=0; i<n3; i++)
    {
        int x;
        cin>>x;
        v3.push_back(x);
        sum3+=x;
    }
    bool ok=false;
    int idx1,idx2,idx3;
     idx1=idx2=idx3=0;
    while(!ok){
        if(sum1==sum2 and sum2==sum3){
            break;
        }
        else{

            if(sum1>sum2){
                if(sum1>sum3){
                    sum1-=v1[idx1];
                    idx1++;
                }
                else {
                    sum3-=v3[idx3];
                    idx3++;
                }
            }
            else{
                if(sum2>sum3){
                    sum2-=v2[idx2];
                    idx2++;
                }
                else {
                    sum3-=v3[idx3];
                    idx3++;
                }

            }
        }
    }
    cout<<sum1<<endl;

}
