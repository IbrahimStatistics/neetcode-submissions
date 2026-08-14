class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
    int rows = mat.size();
    int col = mat[0].size();
    int row = -1 ;

    for(int i = 0; i<rows; i++){
        if(mat[i][0]<=target && target<=mat[i][col-1]){
            row = i;    
            break;
        }
    }

    if(row == -1) return false;

    int start = 0;
    int end = col-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(mat[row][mid]==target){
            return true;
        } else if(mat[row][mid]>target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    

    return false;
    }
};