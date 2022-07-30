#include <iostream>
#include <vector>
using namespace std;
void find_division(vector<int> &arr, int n)
{
    // vector<int> temp;
    for (auto x: arr)
    {
        if (x <= 1399)
        {
            // arr[i] = 4;
            // temp.push_back(4);
            cout << "Division 4"<< endl;
        }
        else if (1400 <= x and x<= 1599)
        {
            // arr[i] = 3;
            // temp.push_back(3);
            cout << "Division 3"<< endl;
        }
        else if (1600 <= x and x<= 1899)
        {
            // arr[i] = 2;
            // temp.push_back(2);
            cout << "Division 2"<< endl;
        }
        else if (1900 <= x)
        {
            // arr[i] = 1;
            // temp.push_back(1);
            cout << "Division 1" << endl;
        }
    }
    return;
}
int main()
{
    long int input;
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    find_division(arr, n);
    // for (auto x : arr)
    // {
    //     cout << "Division " << x << endl;
    // }

    return 0;
}