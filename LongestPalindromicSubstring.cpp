class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int b=0, e= 0;
        
        for(int i = 0; i < s.length(); i++){
            int l1 = helper(s,i,i);
            int l2 = helper(s,i,i+1);
            int lmax = max(l1,l2);
            if(lmax > e-b){
                b = i - (lmax-1) /2;
                e = i + lmax /2;
            }
        }
        
        return s.substr(b,e-b+1);
    }
    
    int helper(string s, int left, int right){
        if(s.empty()) return 0;
        while(left >= 0 && right < s.length() && s.at(left) == s.at(right)){
            left--;
            right++;
        }
        
        return right - left - 1;
    }
};