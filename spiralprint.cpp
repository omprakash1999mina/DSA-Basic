#include <iostream>
using namespace std;
int main()
{
    int arr[][4] = {
    {1, 2, 3, 4},
    {12, 13,14, 5}, 
    {11, 16, 15, 6},
    {10, 9, 8, 7}
    };
    int n = 4;
    int m = 4;
    int col_start = 0;
    int col_end = n - 1;
    int row_start = 0;
    int row_end = m - 1;
    // 1 2  3  4
    // 5 6  7  8
    // 9 10 11 12

    while (col_start <= col_end and row_start <= row_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << ",";
        }

        for (int row = row_start + 1; row <= row_end; row++)
        {
            cout << arr[row][col_end] << ",";
        }

        for (int col = col_end - 1; col >= col_start; col--)
        {
            if (col_start == col_end)
            {
                break;
            }
            cout << arr[row_end][col] << ",";
        }

        for (int row = row_end - 1; row >= row_start+1; row--)
        {
            if (row_start == row_end)
            {
                break;
            }
            cout << arr[row][col_start] << ",";
        }
        col_start++;
        col_end--;
        row_start++;
        row_end--;
    }

    // int size = sizeof(arr) / (sizeof(int) *);
    // cout << arr[0][1] << endl;
    return 0;
}