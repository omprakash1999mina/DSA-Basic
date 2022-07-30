#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int sum)
{
    unordered_set<int> set;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        // cout << set.end();
        if (set.find(x) != set.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }

        set.insert(arr[i]);
    }
    return {};
}

int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int s = 4;
    auto pairs = pairSum(arr, s);
    cout<<arr.size()<<endl;
    cout<<sizeof(arr)/sizeof(int)<<endl;
    if (pairs.size() == 0)
    {
        cout << "No such pairs !!" << endl;
    }
    else
    {
        cout << pairs[0] << "," << pairs[1] << endl;
    }
    // cout<<pairSum(arr, s)<<endl;
}