#include<bits/stdc++.h>
using namespace std;
bool pno[100000000+5];
void SieveOfEratosthenes()
{

    for (int i = 2; i*i<=100000000; i++)
    {
        if (pno[i] == false)
        {
            for (int j = i*2; j<= 100000000; j += i)
                pno[j] = true;
        }
    }

}
int main()
{
    SieveOfEratosthenes();
    int t;

    scanf("%d",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int co=0;
       for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(!pno[x]){
            co++;
        }
       }
       printf("%d\n",co);

    }
}


