#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int i, int key){
    if(i==size) return -1;
    else if(arr[i]==key) return i;
    return linear_search(arr, size, i+1, key);
}

int main(){
    int arr[6] = {10, 5, 20, 15, 30, 25};
    int len = sizeof(arr)/sizeof(int);
    int key = 15;
    cout<<linear_search(arr, len, 0, key);
}