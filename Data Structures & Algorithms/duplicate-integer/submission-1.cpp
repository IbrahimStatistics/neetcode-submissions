class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> maps;

        for(int i = 0; i<nums.size(); i++) {
            if(maps.find(nums[i])!=maps.end()) {
                return true;
            }

            maps[nums[i]] = 1;
        }

        return false;
    }
};