class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs[0].length()) {
            return "";
        }
        string ret = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].length() < ret.length()) {
                ret = ret.substr(0, strs[i].length());
            }
            for (int j = 0; j < ret.length(); ++j) {
                if (strs[i][j] != ret[j]) {
                    ret = ret.substr(0, j);
                    break;
                }
            }
            if (!ret.length()) {
                break;
            }
        }
        return ret;
    }
};