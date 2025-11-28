#include<iostream>
#include<vector>
using namespace std;
void heapify(int i, vector<int> &arr, int size){
    int left=2*i+1;
    int right=2*i+2;
    int maxIdx=i;
    if(left < size && arr[left] > arr[maxIdx]){
        maxIdx=left;
    }
    if(right < size && arr[right] > arr[maxIdx]){
        maxIdx=right;
    }
    if(maxIdx!=i){
        swap(arr[i], arr[maxIdx]);
        heapify(maxIdx, arr, size);
    }
}
void heapSort(vector<int> &arr){
    //Step 1. Buiding Max Heap
    int n=arr.size();
    for(int i=n/2-1; i>=0; i--){ // O(n*logn)
        heapify(i, arr, n);
    }
    //Step 2. taking elements to their correct position
    for(int i=n-1; i>=0; i--){  // O(n*logn)
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}
int main(){
    vector<int> arr={1, 4, 2, 5, 3};
    heapSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}