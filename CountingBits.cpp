class Solution {
public:
    // total complext = nlogn
    // every number n has log(n) +1 bits in it's binary rep
    // Hence for n numbers, n* logn
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i= 0; i <=n; i++){
            res.push_back(popCount(i));
        }
        return res;
    }
    
    int popCount(int n){
        int count = 0;
        while(n!= 0){
            if(n & 1) count++;
            n>>=1;
        }
        return count;
    }
};