class Solution {
public:
    int findJudge(int N, vector<vector<int>>& v) {
        map<int, int> m, m2;
        if(v.size() == 0)
            return 1;
        for(int i =  0; i < v.size(); i ++){
            m[v[i][1]]++;
            m2[v[i][0]] = v[i][1];
        }
        for(auto it : m){
            if(it.second == N-1 && m2[it.first] == 0){
                return it.first;
            }
        }
        return -1;
    }
};
