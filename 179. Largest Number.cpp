bool compare(int a, int b)
    {
        string S1 = to_string(a);
        string S2 = to_string(b);
        if((S1+S2) > (S2+S2)){
            return true;
        }
        
        return false;
         
    }

class Solution {
public:
    
    
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        
        if(nums[0]==0)
        {
            return "0";
        }
        
        string ans = "";
        for(auto i : nums)
        {
            ans += to_string(i);
        }
        return ans;
    }
};
