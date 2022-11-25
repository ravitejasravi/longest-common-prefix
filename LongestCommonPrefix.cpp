class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string common = "";
        int j;

        if(strs.size() == 1)
            return strs[0];

        for(j = 0; j < strs[0].length() && j < strs[1].length(); j++) 
            if(strs[0][j] == strs[1][j]) 
                common += strs[0][j];
            else 
                break;

        for(int i = 2; i < strs.size(); i++) {
            for(j = 0; j < strs[i].length() && j < common.length(); j++) 
                if(common[j] != strs[i][j]) 
                    break;

            common = common.substr(0,j);

            if(common.length() == 0)
                return "";
        }
        
        return common;
    }
};