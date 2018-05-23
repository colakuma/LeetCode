class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int max_len = 0;
        for (int i = 0; i < s.length(); ++i) {
            int left = i;
            int right = i;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                --left;
                ++right;
            }

            int len = right - left - 1;
            if (len > max_len) {
                start = left + 1;
                max_len = len;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                --left;
                ++right;
            }

            len = right - left - 1;
            if (len > max_len) {
                start = left + 1;
                max_len = len;
            }
        }

        return  s.substr(start, max_len);
    }
};