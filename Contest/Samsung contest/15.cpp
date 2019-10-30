#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n
    int patrol[n];
    int distance[n];
    long capacity[n];
    for(int i=0; i<n; i++)
    {
        cin>>patrol[i]>>distance[i];
        capacity[i]=(patrol[i]-distance[i]);
    }
    int pos=0;
    for(int i=0; i<n; i++)
    {
        int ptl=0;
        int check=0;
        for(int j=0; j<n; j++)
        {
            ptl+=capacity[(j+pos)%n];
            if(ptl<0)
            {
                pos++;
                check=-1;
                break;
            }
        }
        if(check==0)
        {
            cout<<pos<<endl;
            break;
        }
    }
}
