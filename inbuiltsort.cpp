#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int arr[] = {-1,-3,-5,-2,3,5,8,4,2,6};
    int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    for(auto x: arr){
        cout<<x<<",";
    }
    return 0;
}

