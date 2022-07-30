#include <iostream>
#include <vector>
using namespace std;
int find_triple(int arr[], int n)
{
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq >= 3)
        {
            return arr[i];
        }
    }

    return -1;
}
int main()
{
    long long int input;
    // vector<int> arr;
    vector<int> arr2;
    int n;
    long long int size;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
            // arr[i] = input;
        }
        arr2.push_back(find_triple(arr, size));
    }
    // find_division(arr, n);
    for (auto x : arr2)
    {
        cout << x << endl;
    }

    return 0;
}