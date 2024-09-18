class Solution {
public:
    
    int bsearch(vector<int> &nums,int target, bool bflag){
        int s = 0, e = nums.size()-1, mid = s+(e-s)/2, ans = -1;
        while(s<=e)
        {
            mid = s+(e-s)/2;
            
            if(nums[mid] < target)
            {
                s = mid + 1;
            }
            else if (nums[mid] > target){
                e = mid -1 ;
            }
            else
            {
                ans = mid;
                if(bflag)
                {
                    e = mid -1;
                    
                }
                else {
                    s = mid + 1;
                }
            }
        }
        return ans;
        
    }
    
    vector<int> searchRange(vector <int>& nums, int target) {
        
       vector<int> res(2);
       res[0] =  bsearch(nums,target, true);
       res[1] = bsearch(nums,target, false);
       return res;
    }
};
