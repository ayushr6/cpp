class Solution {
public:
    int ones(int n){
        int count=0;
        while(n!=0){
            if(n&1) count+=1;
            n=n>>1;
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int i=0;
        while(i<=n){
            ans.push_back(ones(i));
            cout<<i<<" "<<ones(i)<<endl;
            i++;
        }
        return ans;
    }
};