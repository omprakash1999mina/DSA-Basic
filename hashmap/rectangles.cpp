#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long

bool find_pair(vector<pair<int, int>> &arr, pair<int, int> p)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].first == p.first && arr[i].second == p.second)
        {
            return true;
        }
    }
    return false;
}

int count_rectangles(vector<pair<int, int>> &arr)
{
    int count(0);
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int x1 = arr[i].first;
            int y1 = arr[i].second;
            int x2 = arr[j].first;
            int y2 = arr[j].second;
            pair<int, int> p1 = {x1, y2};
            pair<int, int> p2 = {x2, y1};
            
            // for diagonal this same axis points are not right
            if(x1==x2 or y1==y2){
                continue;
            }
            
            if (find_pair(arr, p1) && find_pair(arr, p2))
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int, int>> arr = {{0, 0}, {0, 1}, {1, 1}, {1, 0}, {2, 1}, {2, 0}, {3, 1}, {3, 0}};
    cout << count_rectangles(arr)/2 << endl;
    return 0;
}

