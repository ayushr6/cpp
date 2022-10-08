#include<iostream>
using namespace std;

void insertion_sort(int arr[], int len){
    for(int i=1;i<len;i++){
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
    for(int i=0;i<len;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {5,4,2,3,1,0};
    int len = sizeof(arr)/sizeof(int);
    insertion_sort(arr, len);
}