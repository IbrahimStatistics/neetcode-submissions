class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> maps;

        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            maps[nums[i]]++;
        }

        // Remove duplicates
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        // Sort unique numbers by frequency
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return maps[a] > maps[b];
        });

        // Take first k elements
        for (int i = 0; i < k; i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};