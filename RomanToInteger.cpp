class Solution {
public:
    int romanToInt(string s) {
        //Total complexity is O(1) since roman numerals don't go > 3999 hence constant
        int res =0;
        unordered_map<char,int> dict {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        for(int i =0; i < s.size(); i++){
            if(dict[s[i]] < dict[s[i+1]]) res-=dict[s[i]];
            else res+=dict[s[i]];
        }
        
        return res;
    }
};
