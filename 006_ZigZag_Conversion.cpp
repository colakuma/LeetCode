class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return  s;
        }
        std::string ret;
        int count = numRows * 2 - 2;
        int num = s.length() / count;
        if (s.length() % count != 0) {
            num++;
        }

        for (int j = 0; j <= count / 2; ++j) {
            for (int i = 0; i < num; ++i) {
                int index = count * i + j;
                if (index < s.length()) {
                    ret += s[index];
                }

                if (j != 0 && j != count / 2) {
                    int index2 = count * i + (count - j);
                    if (index2 < s.length()) {
                        ret += s[index2];
                    }
                }
            }
        }
        return ret;
    }
};
