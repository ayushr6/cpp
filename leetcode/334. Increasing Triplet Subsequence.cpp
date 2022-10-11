class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if(len<3) return false;
        int i=INT_MAX, j=INT_MAX;
        for(int k=0;k<len;k++){
            if(nums[k]<=i) i=nums[k];
            else if(nums[k]<=j) j=nums[k];
            else return true;
        }
        return false;
    }
};