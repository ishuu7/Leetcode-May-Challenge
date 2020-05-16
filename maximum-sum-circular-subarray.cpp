class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int n = A.size();
        if(n == 0)
            return 0;
        int totalSum = 0;
        int localMinSum = 0, localMaxSum = 0;
        int maxiSubArray = INT_MIN;
        int miniSubArray = INT_MAX;
        int num;
        for(auto &x : A){
            localMaxSum += x;
            localMinSum += x;
            totalSum += x;
            maxiSubArray = max(maxiSubArray, localMaxSum);
            localMaxSum = (localMaxSum > 0) ? localMaxSum : 0;
            miniSubArray = min(miniSubArray, localMinSum);
            localMinSum = (localMinSum > 0) ? 0 : localMinSum;
        }
        return (totalSum == miniSubArray) ? maxiSubArray : max(maxiSubArray, totalSum - miniSubArray);
        
    }
};
