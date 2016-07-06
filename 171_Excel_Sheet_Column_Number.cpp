class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        for (int i = s.length() - 1; i >= 0 ; --i) {
            num +=   (s[i] - 'A' + 1) * (int)(pow(26, s.length() - 1 - i) + 0.5);
        }
        return num;
    }
};
