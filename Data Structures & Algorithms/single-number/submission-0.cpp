class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> maps;

        for(int i=0; i<nums.size(); i++) {
            if(maps.find(nums[i])!=maps.end()) maps[nums[i]]++;
            else maps[nums[i]] = 1;
        }

        for(auto i : maps) {
            if(i.second == 1) return i.first;
        }

        return -1;
    }
};