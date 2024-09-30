class Solution {
public:
    
    void getCombination(vector<int>& candidates, int index,int target, vector<int>& ds, vector<vector<int>>& ans)
    {
        if(index == candidates.size())
        {
           if(target == 0)
            {
              ans.push_back(ds);  
            }
        return; 
        }
           
        
        if(candidates[index] <= target)
        {
            ds.push_back(candidates[index]);
            getCombination(candidates, index, target-candidates[index], ds, ans);
            ds.pop_back();
        }
        getCombination(candidates, index+1, target, ds, ans);
                
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        getCombination(candidates, 0, target, ds, ans);
        return ans;

    }
};
