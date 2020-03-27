#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = "", b = "";
        bool isChoosen = false;
        for (int i = 0; i < n; i++)
        {
            if(isChoosen){
                a+='0';
                b+=s[i];
                continue;
            }
            if (s[i] == '2')
            {
                a += '1';
                b += '1';
            }
            else if (s[i] == '1')
            {
                if (!isChoosen)
                {
                    a += '1';
                    b += '0';
                    isChoosen = true;
                }

            }
            else
            {
                a += '0';
                b += '0';
            }
        }
        cout << a << endl
             << b << endl;
    }
}