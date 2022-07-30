#include <iostream>
using namespace std;

int selection_short(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // int current = arr[i];
        int min_pos = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[min_pos],arr[i]);
    }

    return 0;
}

int main()
{
    int arr[] = {1, -2, -3, -6, 2, 4, 3, 8, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    selection_short(arr, size);
    for (auto x : arr)
    {
        cout << x << ",";
    }
}