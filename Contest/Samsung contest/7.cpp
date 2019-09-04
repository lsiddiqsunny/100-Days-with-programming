#include <stack>
#include <iostream>
using namespace std;

int main()
{
    stack<int> first,second;
    int q;
    cin >> q;
    while(q--)
    {
        int type, x;
        cin >> type;
        if(type == 1)
        {
            cin >> x;
            second.push(x);
        }
        else
        {
            if(first.empty())
            {
                while(!second.empty())
                {
                    first.push(second.top());
                    second.pop();
                }
            }

                if(type == 2)
                    first.pop();
                if(type == 3)
                    cout << first.top() << endl;

        }
    }
    return 0;
}
