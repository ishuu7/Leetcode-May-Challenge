class Solution {
public:
    int findJudge(int N, vector<vector<int>>& v) {
		vector<int> count(N + 1);
		for(auto e:v)
			count[e[0]]--, count[e[1]]++;
		for(int i = 1; i <= N; i++)
			if(count[i] == N - 1)
				return i;
        return -1;
    }
};
