#include<iostream>
using namespace std;

void bubble_short(int arr[],int size){
    for (int times = 1; times <= size-1; times++)
    {
        for (int i = 0; i <= size-1-times; i++)
        {
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
    }
    
}

int main(){
    int arr[] ={2,-4,-6,1,5,8,6,3,2};
    int size = sizeof(arr)/sizeof(int);
    bubble_short(arr, size);
    for (auto x: arr)
    {
        cout<<x<<",";
    }

    
}