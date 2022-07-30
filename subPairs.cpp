#include<iostream>
using namespace std;
void sub_pairs(int arr[],int size){
for (int i = 0; i < size; i++)
{
    int x = arr[i];
    for (int j = i+1; j < size; j++)
    {
        int y = arr[j];
        cout<< x <<" "<<y<<endl;
    }
    cout<<endl;
}

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);

    sub_pairs(arr, size);
}