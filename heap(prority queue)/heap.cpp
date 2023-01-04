#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr = {2, 4, 3, 7, 5, 8, 1, 9};
    // decearising order
    // priority_queue<int> heap;

    // increasing order
    // priority_queue<int , vector<int>, greater<int> > heap;

    // compare by custom class
    priority_queue<int , vector<int>, Compare > heap;
    
    for (auto x : arr)
    {
        heap.push(x);
    }
    while (!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }

    return 0;
}