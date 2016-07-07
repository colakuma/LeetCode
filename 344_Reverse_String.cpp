class Solution {
public:
    // string reverseString(string s) {
    //     string ret = "";
    //     for (int i = s.length() - 1; i >= 0; --i) {
    //         ret += s[i];
    //     }
    //     return ret;
    // }
    
    string reverseString(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
};
