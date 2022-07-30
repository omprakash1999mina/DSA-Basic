
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	// vector <int> freq;
	// vector <int> freq(9);
	// vector <int> freq(9,0);
	// vector <int> freq{1,2,3,4,5};
    
    int arr[] ={1,2,3,6,9,2,5,8,7,12};
    int size = sizeof(arr)/sizeof(int);
	vector <int> freq(arr, arr+size);

    for(auto x: freq){
        cout<<x<<",";
    }
    return 0;
}

