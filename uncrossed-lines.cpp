class Solution {
public:

    
    vector<vector<int> >dp;
    
    int fun(int ii, int jj, vector<int>& A, vector<int>& B) { // using LCS
        if(ii >= A.size() ||  jj >= B.size()) {
            return 0;
        }
        if(dp[ii][jj] != -1)
            return dp[ii][jj];
        int ans = 0;
        if(A[ii] == B[jj])
            ans = 1 + fun(ii+1, jj+1, A, B);
        else
            ans = max(fun(ii+1, jj, A, B), fun(ii, jj+1, A, B));
        return dp[ii][jj] = ans;
    }
    
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        dp.assign(A.size()+1, vector<int>(B.size() + 1, -1));
        int ans = fun(0, 0, A, B);
        return ans;   
    }
};
