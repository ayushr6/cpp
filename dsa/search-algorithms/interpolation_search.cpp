#include<iostream>
using namespace std;

int interpolation_search(int arr[], int l, int h, int key){
    if(l<=h && key>=arr[l] && key<=arr[h]){
        int pos = l + ((h-l)/(arr[h]-arr[l]))*(key-arr[l]);
        if(arr[pos]==key) return pos;
        if(arr[pos]<key) return interpolation_search(arr, pos+1, h, key);
        else return interpolation_search(arr, l, pos-1, key);
    }
    return -1;
}

int main(){
    int arr[] = {0, 10, 20, 30, 40, 50 ,60, 70, 80, 90, 100};
    int len = sizeof(arr)/sizeof(int);
    cout<<interpolation_search(arr, 0, len, 40);
}