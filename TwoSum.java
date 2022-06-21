import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hashmap = new HashMap<>();
        int[] arr = new int[2];
        for(int i =0; i < nums.length; i++){
            hashmap.putIfAbsent(nums[i], i);
        }
        for(int x = 0; x< nums.length; x++){
            if (hashmap.containsKey(target - nums[x]) && x!= hashmap.get(target - nums[x])){
                // arr[1] = hashmap.get(target-nums[x]);
                // arr[0] = x;
                // break;
                return new int[] {x, hashmap.get(target - nums[x])};
            }
        }
        // return arr;
        return null;
        
    }
}