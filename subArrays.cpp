#include <iostream>
using namespace std;

// brute force apparoch
int find_sub_arrays(int arr[], int size)
{
    int highestSum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout << arr[k] << ",";
            }
            cout << endl;
            highestSum = max(sum, highestSum);
        }
        cout << endl;
    }
    return highestSum;
}

int find_sub_arrays2(int arr[], int size)
{
    int Highestsum = 0;
    int prefix[] = {};
    prefix[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        prefix[i]= prefix[i-1] + arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int sum;
        for (int j = i; j < size; j++)
        {
            sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            Highestsum = max(sum, Highestsum);
        }
    }
    return Highestsum;
}

int kadanes_algo_sub_arrays(int arr[],int size){
    int csum =0;
    int largestSum =0;
    for (int i = 0; i < size; i++)
    {
        csum += arr[i];
        if (csum < 0)
        {
            csum =0;
        }
        largestSum = max(largestSum, csum);
        
    }
    return largestSum;
}

int main()
{
    int arr[] = {1, 2, -3, 4, -5, 6, 7, -8};
    int size = sizeof(arr) / sizeof(int);
    
    
    
    int HighestSum = 0;
    // HighestSum =find_sub_arrays(arr, size);
    // HighestSum =find_sub_arrays2(arr, size);
    HighestSum =kadanes_algo_sub_arrays(arr, size);

    cout<<"Highest sum is : "<<HighestSum<<endl;

}