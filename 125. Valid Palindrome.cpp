class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        for(int i = 0;i< s.size()/2;i++)
        {
            while(start < end && (!isalpha(s[start]) && !isdigit(s[start]))  || isspace(s[start]))
            {
                start++;
                    
            }
            while(start < end && (!isalpha(s[end]) && !isdigit(s[end])) || isspace(s[end]))
            {
                end --;
            }
            if(start > end)
            {
                return true;
            }
            if(tolower(s[start]) == tolower(s[end]))
            {
                start ++;
                end--;
            }
            else{
                return false;
            }
            
        }
        return true;
    }
};
