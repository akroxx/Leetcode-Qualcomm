class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string res;
        for(char c : s){
            if(c == '('){
                if(count++)
                    res+='(';
            }
            else{   //')'
                if(--count)
                    res+=')';
            }
        }
        return res;
    }
};