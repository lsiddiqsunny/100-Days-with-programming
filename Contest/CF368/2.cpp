#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int i = 0, j = 0;
	    bool ok = 1;
	    while (i<a.size() && j<b.size()) {
	        int ii = i;
	        while (ii<a.size() && a[ii]==a[i]) ii++;
	        int jj = j;
	        while (jj<b.size() && b[jj]==b[j]) jj++;
	        if (a[i] != b[j]) ok = 0;
	        else if (ii-i>jj-j) ok = 0;
	        i = ii;
	        j = jj;
	    }
	    if (i!=a.size() || j!=b.size()) ok = 0;
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }


}
