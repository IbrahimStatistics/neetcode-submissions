class Solution {
public:
    void dfs(vector<vector<int>>& image, int m, int n, int color, int i, int j, int orgColor) {
        if(i<0 || j<0 || i>=m || j>=n || image[i][j] != orgColor || image[i][j] == color) return;

        image[i][j] = color;

        dfs(image, m, n, color, i-1, j, orgColor);
        dfs(image, m, n, color, i, j+1, orgColor);
        dfs(image, m, n, color, i+1, j, orgColor);
        dfs(image, m, n, color, i, j-1, orgColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orgColor = image[sr][sc];
        if (orgColor == color) return image; 
        int m = image.size();
        int n = image[0].size();

        dfs(image, m, n, color, sr, sc, orgColor);

        return image;
    }
};