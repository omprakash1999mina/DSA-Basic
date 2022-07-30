#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int end){
int i = start;
int m = (start+end)/2;
int j = m+1;
vector<int> temp;

while(i<=m and j<=end){
	if(arr[i]<arr[j]){
		temp.push_back(arr[i++]);
	}
	else{
		temp.push_back(arr[j++]);
	}
}

while(i<=m){
    temp.push_back(arr[i++]);
}
while(j<=end){
    temp.push_back(arr[j++]);
}

// assing the values to original arrray 
int k = 0;
for(int i=start; i<=end; i++){
	arr[i]=temp[k++];
}

return;
}


void merge_sort(vector<int> &arr, int start, int end){
	// base case
	if(start>=end){
		return;
	}
	// merge implimentation
	int mid = (start+end)/2;
	merge_sort(arr, start, mid);
	merge_sort(arr, mid +1 , end);

	return merge(arr, start, end);
}

int main() {
	vector<int> arr{3,2,1,5,-2,-1,-5,7,9,5};
	int start = 0;
	int end = arr.size()-1;

	merge_sort(arr, start, end);
	for(auto x: arr){
		cout<<x<<",";
	}
	return 0;
}

