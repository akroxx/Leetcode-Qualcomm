class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int index = 0;
        int n = s.size();
        int result = 0;
        
        //Ignoring leading white-spaces
        while(index < n && s[index] == ' '){
            index++;
        }
        
        //Checking for +ve/-ve sign
        if(index < n && s[index] == '+'){
            sign = 1;
            index++;
        }
        else if(index < n && s[index] == '-'){
            sign = -1;
            index++;
        }
        
        while(index < n && isdigit(s[index])){
            int digit = s[index] - '0';
            
            //Overflow and underflow
            if(result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)){
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = 10 * result + digit;
            index++;
        }
        
        return sign*result;
    }
};