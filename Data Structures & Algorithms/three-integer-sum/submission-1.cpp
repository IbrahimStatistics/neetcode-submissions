class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> triplets;

        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int totalSum = nums[i] + nums[j] + nums[k];

                if (totalSum == 0) {
                    triplets.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (totalSum > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        return vector<vector<int>>(triplets.begin(), triplets.end());
    }
};