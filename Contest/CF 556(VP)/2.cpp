#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    int board[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='#')
            {
                board[i][j]=1;
            }
            else
                board[i][j]=0;
        }
    }
    bool ok=true;




    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(board[i][j]==0)
            {
                board[i][j]=1;
                if(i+1<n and board[i+1][j]==0)
                {
                    board[i+1][j]=1;
                }
                else
                    ok=false;
                if(i+2<n and board[i+2][j]==0)
                {
                    board[i+2][j]=1;
                }
                else
                    ok=false;
                if(i+1<n and j+1<n and board[i+1][j+1]==0)
                {
                    board[i+1][j+1]=1;
                }
                else
                    ok=false;

                if(i+1<n and j-1>=0 and board[i+1][j-1]==0)
                {
                    board[i+1][j-1]=1;
                }
                else
                    ok=false;


            }
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(board[i][j]==0)
            {
                ok=false;
            }
        }
    }


    if(!ok)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
        cout<<"YES"<<endl;
}
