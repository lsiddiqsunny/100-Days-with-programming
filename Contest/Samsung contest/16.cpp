#include<bits/stdc++.h>
using  namespace std;

int main()
{

    int n;
    cin>>n;

    priority_queue<int, vector<int>, greater<int>> minheap;
    priority_queue<int> maxheap;
    double median;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if (x<= median)
        {
            maxheap.push(x);
        }
        else
        {
            minheap.push(x);
        }

        if (minheap.size() > maxheap.size()+1)
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
        if (maxheap.size() > minheap.size()+1)
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }

        if (minheap.size() == maxheap.size())
        {
            median = (maxheap.top() + minheap.top())/2.0;
        }
        else if(minheap.size() > maxheap.size())
        {
            median = (double)minheap.top();
        }
        else if (minheap.size() < maxheap.size())
        {
            median = (double)maxheap.top();
        }
        printf("%.1f\n",median);
    }

}
