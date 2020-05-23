class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};
        for(char &x : s) {
            freq[x]++;
        }
        priority_queue<pair<int, char> >q;
        for(int i = 0; i < 256; i++) {
            q.push({freq[i], i});
        }
        string ans = "";
        while(!q.empty()) {
            pair<int, char> temp = q.top();
            q.pop();
            while(temp.first) {
                ans += temp.second;
                temp.first--;
            }
        }
        return ans;
    }
};
