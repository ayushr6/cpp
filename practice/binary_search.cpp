#include<iostream>
using namespace std;

int binary_search(int arr[], int start, int end, int key){
    if(start>end) return -1;
    else{
        int mid = start + (end-start)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) return binary_search(arr, start, mid-1, key);
        else binary_search(arr, mid+1, end, key);
    }
}

int main(){
    int arr[] = {0,10, 20, 30, 40, 50, 60, 70};
    int len = sizeof(arr)/sizeof(int);
    int key = 30;
    cout<<binary_search(arr, 0, len-1, key);
}