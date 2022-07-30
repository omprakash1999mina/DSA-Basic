#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int byRecursion(int n, int k)
{
    int sum = 0;
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    for (int i = 1; i <= k; i++)
    {
        sum += byRecursion(n - i, k);
    }

    return sum;
}

int byRCM(int n, int k, vector<int> &dp)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += byRCM(n - i, k, dp);
    }

    return dp[n] = sum;
}

void bySlidingWindow(int n, int k)
{
    vector<int> ans(n + 1);
    ans[0] = 1;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int dc = 0;
        if ((i - k - 1) >= 0)
        {
            dc = ans[i - k - 1];
        }
        ans[i] = 2 * ans[i - 1] - dc;
    }
    cout << ans[n] << endl;
}
void byItrative(int n, int k)
{
    vector<int> ans(n + 1);
    ans[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int t = k;
        int sum = 0;
        while (t)
        {
            if ((i - t) >= 0)
            {
                sum += ans[i - t];
            }
            t--;
        }
        ans[i] = sum;
    }
    cout << ans[n] << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> dp(n + 1, 0);
    cout << byRecursion(n, k) << endl;
    cout << byRCM(n, k, dp) << endl;
    byItrative(n, k);
    bySlidingWindow(n, k);

    return 0;
}