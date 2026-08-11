class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeating = -1;
        int missing = -1;

        int len = n*n;
        vector<int> count(len+1, 0);
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                count[grid[i][j]]++;
            }
        }

        for(int i = 0; i<count.size(); i++) {
            if(count[i] == 2) repeating = i;
            if(count[i] == 0) missing = i;
        }

        return {repeating, missing};
    }
};