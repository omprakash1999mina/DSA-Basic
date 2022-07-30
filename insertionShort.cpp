#include <iostream>
using namespace std;

int insertion_short(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while(prev >=0 and arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev -1;
        }
        arr[prev+1]= current;
    }
}

int main()
{
    int arr[] = {2, 4, -2, -3, 6, 8, 1, 5, 7};
    int size = sizeof(arr) / sizeof(int);

    insertion_short(arr, size);
    for (auto x : arr)
    {
        cout << x << ",";
    }
}