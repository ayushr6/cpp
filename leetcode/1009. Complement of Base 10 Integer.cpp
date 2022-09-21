class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int temp=n, mask=0;
        while(temp!=0){
            mask = (mask << 1) | 1;
            temp = temp>>1;
        }
        return ~n & mask;
    }
};