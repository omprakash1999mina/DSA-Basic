#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binary_search(vector<int> &arr, int n, int input)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == input)
        {
            return mid;
        }
        else if (arr[mid] < input)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
};

int main()
{
    vector<int> arr={1, 2, 3, 4, 5, 6, 7, 8, 10, 20, 30, 40};
    int size = arr.size();
    int input;

    cout << "Enter a element : ";
    cin >> input;

    int index = binary_search(arr, size, input);
    if (index != -1)
    {
        cout << index << " is the index of " << input << endl;
    }
    else
    {
        cout << "Not Found !!" << endl;
    }
    return 0;
}