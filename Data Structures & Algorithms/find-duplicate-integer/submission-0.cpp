class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> maps;
        for(int i = 0; i<nums.size(); i++) {
            if(maps.find(nums[i]) != maps.end()) {
                return nums[i];    
            }

            maps[nums[i]]++;
        }

        return -1;
    }
};
