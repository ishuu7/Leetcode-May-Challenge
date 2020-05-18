class Solution {
    
public:
    vector<int> freq, freq2;
    bool checker(){
        bool fl = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] != freq2[i]){
                fl = 1;
                break;
            }
        }
        return fl;
    }
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        vector<int>count;
        if(k > s.size())
            return count;
        freq.assign(26, 0);
        for(char &a : p){
            freq[a - 'a']++;
        }
        freq2.assign(26, 0);
        for(int i = 0; i < k; i++){
            freq2[s[i]-'a']++;
        }
        bool fl = checker();
        if(!fl){
            count.push_back(0);
        }
        int it = k;
        while(it != s.size()){
            freq2[s[it]-'a']++;
            freq2[s[it-k] - 'a']--;
            fl = checker();
            if(!fl){
                count.push_back(it-k+1);
            }
            it++;
        }
        return count;
    }
};
