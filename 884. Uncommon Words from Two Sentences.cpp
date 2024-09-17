class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string BigS = s1 + " " + s2;
        //cout<<s1.max_size();
        
        unordered_map<string, int> mp;
        
        string temp ="";
        
        for(auto& s : BigS)
        {
            if(s == ' ')
            {
                mp[temp]++;
                temp = "";
            }
            else{
                temp = temp + s;
            }
        }
        
        if(temp != "")
        {
            mp[temp]++;
            temp = "";
        }
        
        vector<string> ans;
        for(auto& s : mp)
        if(s.second == 1)
        {
            ans.push_back(s.first);
        }
        return ans;
        
    }
};
