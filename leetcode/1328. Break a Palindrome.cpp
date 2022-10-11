class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.length();
        if(len==1) return "";
        for(int i=0;i<len/2;i++){
            if(palindrome[i]!='a') return palindrome.substr(0,i)+'a'+palindrome.substr(i+1,len);
        }
        return (palindrome.substr(0,len-1)+'b');
    }
};