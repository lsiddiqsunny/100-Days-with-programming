#include<bits/stdc++.h>
using namespace std;


set<string> cache;

bool isValid(string loginAttempt, set<string> &pass, vector<string> &out)
{
    bool ans = false;

    if (cache.find(loginAttempt)!=cache.end())
    {
        return false;
    }

    if (pass.find(loginAttempt)!=pass.end())
    {
        out.push_back(loginAttempt);
        return true;
    }
    else
    {
        cache.insert(loginAttempt);
    }

    for (int i = 0; i < loginAttempt.length(); i++)
    {
        string left = loginAttempt.substr(0, i);
        string right = loginAttempt.substr(i);
        ///cout<<left<<" "<<right<<endl;
        ans = isValid(left, pass, out) && isValid(right, pass, out);
        if (ans)
        {
            return true;
        }
    }

    return ans;
}

int main()
{


    int tests;
    cin>>tests;
    for (int t = 1; t <= tests; t++)
    {
        int n ;
        cin>>n;
        set<string> pass ;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin>>x;
            pass.insert(x);
        }
        string loginAttempt;
        cin>>loginAttempt;

        vector<string> out ;
        cache.clear();
        bool res = isValid(loginAttempt, pass, out);
        if (res)
        {
            for (string p : out)
            {
                cout<<p<<" ";
            }
        }
        else
        {
            cout<<"Wrong Answer";
        }
        cout<<endl;
    }
}
