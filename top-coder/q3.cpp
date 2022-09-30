#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if(n==1) return true;
    for(int i=2;i<sqrt(n)+1;i++){
        if(!(n%i)) return false;
    }
    return true;
}

int main() {
    int start_range, end_range;
    cin>>start_range>>end_range;
    while(start_range<=end_range){
        if(is_prime(start_range)) cout<<start_range<<" ";
        start_range++;
    }
}