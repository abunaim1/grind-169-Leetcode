// https://leetcode.com/problems/single-number/description/
// Using XOR with commutative property this problem is solved. 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums){
            ans = ans ^ val;
        }
        return ans;
    }
};