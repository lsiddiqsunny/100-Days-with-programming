#include<bits/stdc++.h>
using namespace std;
int tree[1000000];
int A[200000];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
    {
        return tree[node];
    }

    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(p1, p2);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q,n,d;

    cin >> n >> q;

    for(int i=0; i<n; ++i)
        cin >> A[i];

    build(1,0,n-1);

    while(q--)
    {

        cin >> d;

        int mini=INT_MAX;
        for(int i=0; i<=n-d; ++i)
        {
            int temp_max=query(1,0,n-1,i,i+d-1);

            if(temp_max<mini)
                mini = temp_max;

        }

        cout<<mini<<endl;
    }


    return 0;
}
