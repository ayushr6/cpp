class Solution {
public:
    int climbStairs(int n) {
        int i1=1,i2=0,temp=0,count=0;
        while(count!=n){
            temp=i1;
            i1+=i2;
            i2=temp;
            count+=1;
        }
        return i1;
    }
};