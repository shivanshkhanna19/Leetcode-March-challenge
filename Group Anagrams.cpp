class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<string> s = strs;
     vector<vector<string>> ans;
     
     for(int i=0;i<s.size();i++)
     {
         sort(s[i].begin(),s[i].end());
     }
        
    unordered_map<string,int> mp;
        int c =0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = c;
                ans.push_back(vector<string>());
                ans[c].push_back(strs[i]);
                c++;
            }
            else{
                ans[mp[s[i]]].push_back(strs[i]);
            }
        }
        return ans;
        
    }
};
