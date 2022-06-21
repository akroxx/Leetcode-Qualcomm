class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int flag = 1;
        //Complexity : O(n) : for n chars in string s we iterate once and push/pop from stack is O(1)
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                stk.push(c);
                flag = 0;
            }
            else if(c == ')' && !stk.empty() && stk.top() == '('){
                stk.pop();
                flag = 1;
            }
            else if(c == ']' && !stk.empty() && stk.top() == '['){
                stk.pop();
                flag = 1;
            }
            else if(c == '}' && !stk.empty() && stk.top() == '{'){
                stk.pop();
                flag = 1;
            }
            else{
                return false;
            }
        }
        
        return (flag == 1 && stk.empty());
    }
};