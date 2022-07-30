#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int couting_sort(int arr[], int size){
    int highest = arr[0];
    for (int i=0; i<size;i++){
        highest = max(highest, arr[i]);
    }

    vector <int> freq(highest+1, 0);

    for(int i=0; i<size; i++){
        freq[arr[i]]++;
    }
    int j =0;
    for(int i=0; i<=highest; i++){
        if(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }

    return 0;
}

int main() {
    int arr[] ={1,-2,-4,-1,-6,5,7,9,8,4,2};
    int size = sizeof(arr)/sizeof(int);
    couting_sort(arr, size);
    for(auto x: arr){
        cout<<x<<",";
    }
    return 0;
}

