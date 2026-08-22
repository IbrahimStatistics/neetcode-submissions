class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                temp++;
                maxOnes = max(maxOnes, temp);
            } else {
                temp = 0;
            }
        }

        return maxOnes;
    }
};
