#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[][10]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    char str[][10]={
        "this",
        "is",
        "op",
        "the",
        "great"
    };

    // for (int i=0; i<3;i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
        
    //     // cout<<x<<endl;
    // }
    
    for (auto x: str)
    {
        cout<<x<<" ";
    }
    

}