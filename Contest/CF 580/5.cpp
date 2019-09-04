#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j]=-1;
        }
    }
    int q=0;
    a[1][1]=1;
    a[n][n]=0;
    cout<<"? 1 1 "<<2<<" "<<2<<"\n";
    fflush(stdout);
    int x;
    cin>>x;
    if(x==1)
    {
        a[2][2]=1;

    }
    else
    {
        a[2][2]=0;
    }


    cout<<"? 2 1 "<<n<<" "<<n<<"\n";
    fflush(stdout);
    cin>>x;
    if(x==1)
    {
        a[2][1]=0;

    }
    else
    {
        a[2][1]=1;
    }


    cout<<"? 1 2 "<<n<<" "<<n<<"\n";
    fflush(stdout);
    cin>>x;
    if(x==1)
    {
        a[1][2]=0;

    }
    else
    {
        a[1][2]=1;
    }

    q=3;

    for(int i=1; i<=n; i++)
    {
        for(int j=3; j<=n; j++)
        {
            q++;
            int z=a[i][j-2];
            cout<<"? "<<i<<" "<<j-2<<" "<<i<<" "<<j<<"\n";

            fflush(stdout);
            int x;
            cin>>x;
            if(x==1)
            {
                a[i][j]=z;
            }
            else
            {
                a[i][j]=1-z;
            }



        }
        if(i==1|| i==2)
        {


            for(int j=3; j<=n; j++)
            {q++;
                int z=a[j-2][i];
                cout<<"? "<<j-2<<" "<<i<<" "<<j<<" "<<i<<"\n";

                fflush(stdout);
                int x;
                cin>>x;
                if(x==-1){
                    exit(0);
                }
                if(x==1)
                {
                    a[j][i]=z;
                }
                else
                {
                    a[j][i]=1-z;
                }



            }

        }

    }
   // cout<<q<<endl;
    cout<<"!\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }

    fflush(stdout);


}
