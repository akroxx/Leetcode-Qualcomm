class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<int> checker (26,0);
        for(int i = 0; i < s.length(); i++){
            checker[s[i] - 'a']+=1;
            checker[t[i] - 'a']-=1;
        }
        
        for(int x : checker){
            if( x != 0) return false;
        }
        
        return true;
    }
};