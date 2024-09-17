class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string BigS = s1 + " " + s2;
        string s3;
        cin>>s3;
            cout<<s3;
        stringstream str(BigS);
        string temp ="";
        unordered_map<string, int> mp;
        
        while(str >> temp)
        {
            mp[temp]++;
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
