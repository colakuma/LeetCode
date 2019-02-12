class Solution {
public:
    int romanToInt(string s) {
        static std::unordered_map<char, int> map_v = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        if (s.length() > 0) {
            sum += map_v[s[s.length() - 1]];
        }
        for (int i = s.length() - 2; i >= 0; --i) {
            if (map_v[s[i + 1]] > map_v[s[i]]) {
            sum -= map_v[s[i]];
            } else {
                sum += map_v[s[i]];
            }
        }
        return sum;
    }
};