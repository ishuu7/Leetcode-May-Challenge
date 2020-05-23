class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int> >ans;
        int i = 0,  j = 0;
        while(i < A.size() && j < B.size()){
            int maxi = max(A[i][0], B[j][0]);
            int mini = min(A[i][1], B[j][1]);
            if(maxi <= mini)
                ans.push_back({maxi, mini});
            if(A[i][1] < B[j][1])
                i++;
            else j++;
        }
        return ans;
        
    }
};
