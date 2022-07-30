#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int min_jumps(vector<int> &arr, int n, vector<int> &dp, int i){
    if(i==n-1){
        return 0;
    }
    if(i>=n){
        return INT_MAX;
    }
    if(dp[i]!=0){
        return dp[i];
    }

    int steps=INT_MAX;
    int jumps = arr[i];
    for (int k = 1; k <=jumps; k++)
    {
        int next_cell = i+k;
        int sub = min_jumps(arr,n,dp,next_cell);
        if(sub!=INT_MAX){
            steps = min(steps,sub+1);
        }
    }
    return dp[i]=steps;
}

int main()
{
    vector<int> arr{3,4,2,1,2,3,7,1,1,3};
    int n = arr.size();

    vector<int> dp(n,0);
    cout<<min_jumps(arr,n,dp,1)<<endl;
    return 0;
}