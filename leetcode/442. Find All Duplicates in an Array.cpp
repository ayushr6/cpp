class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++) map[nums[i]]+=1;
        for(auto x: map){
            if(x.second>1) ans.push_back(x.first);
        }
        return ans;
    }
};