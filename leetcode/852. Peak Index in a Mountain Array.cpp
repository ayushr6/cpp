class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0, right=arr.size()-1;
        int mid = +(right-left)/2;
        while(left<right){
            if(arr[mid]<arr[mid+1]) left=mid+1;
            else right=mid;
            mid = (right-left)/2 + left;
        }
        return left;
    }
};