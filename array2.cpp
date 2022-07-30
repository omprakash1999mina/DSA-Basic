#include <iostream>
using namespace std;

void printArray(int *arr, int n )
{
    // int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    
    cout<<endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<<", ";
    }
    cout<<endl;
    
    // printArray(arr);
    printArray(arr,size);
    return 0;
}