#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{

    // these are  bassicaly binary search (log N ) based so only applied on sorted array

    // lower bound it return the index itrator of element equal to or just bada 

    // upper bound it return the index of just bada element 

    vector<int> arr{ 10, 20, 30, 30, 30, 40, 50 };
    // return itrator
    int up = *( upper_bound(arr.begin(),arr.end(),20) );
    int low = *( lower_bound(arr.begin(),arr.end(),20) );
    cout<< "upper : "<<  up <<" lower : " << low <<endl;

    int up2 = upper_bound(arr.begin(),arr.end(),20) -arr.begin();
    int low2 = lower_bound(arr.begin(),arr.end(),20)-arr.begin();
    cout<< "upper : "<<  arr[up2] <<" lower : " << arr[low2] <<endl;
    
    return 0;
}