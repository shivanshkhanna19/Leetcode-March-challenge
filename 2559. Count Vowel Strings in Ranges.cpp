class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int size = words.size();
        unordered_set<char> mn = {'a', 'e', 'i', 'o', 'u'};
        vector<int> prefix(size + 1, 0);

        for (int i = 0; i < size; i++) {
            prefix[i + 1] = prefix[i];
            if (mn.count(words[i].front()) && mn.count(words[i].back())) {
                prefix[i + 1]++;
            }
        }

        vector<int> ans;
        for(auto i : queries){
            int L = i[0], R = i[1];
            ans.push_back(prefix[R + 1] - prefix[L]);  
        }
        return ans;
    }
};
