class Solution {
public:
    int n, m;
    int col;
    int newCol;
    void dfs(vector<vector<int>>& image, int r, int c){
        if(r >= n || c >= m || r < 0 || c < 0 )
            return;
        if(image[r][c] == col){
            image[r][c] = newCol;
            dfs(image, r+1, c);
            dfs(image, r-1, c);
            dfs(image, r, c+1);
            dfs(image, r, c-1);
        }
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        n = image.size();
        m = image[0].size();
        col = image[sr][sc];
        newCol = newColor;
        if(newCol == col)
            return image;
        dfs(image, sr, sc);
        return image;
    }
};

