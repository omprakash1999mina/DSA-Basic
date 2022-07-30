#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int countTrees(int n)
{
    if (n == 0 or n == 1)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = countTrees(i - 1);
        int y = countTrees(n - i);

        ans += x * y;
    }
    return ans;
}

int countTreesdp(vector<int> &dp, int n)
{
    if (n == 0 or n == 1)
    {
        return 1;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = countTreesdp(dp, i - 1);
        int y = countTreesdp(dp, n - i);

        ans += x * y;
    }
    return dp[n] = ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n+1, 0);
    cout << countTrees(n) << endl;
    cout << countTreesdp(arr, n) << endl;

    return 0;
}