class Solution {
public:
    string intToRoman(int num) {
        std::vector<std::pair<int, std::string>> vec = {
            {1000, "M"}, {900,"CM"}, {500,"D"}, {400,"CD"},
            {100, "C"}, {90,"XC"}, {50, "L"},{40,"XL"},
            {10, "X"}, {9, "IX"}, {5, "V"},{4,"IV"},
            {1, "I"}
        };

        std::string s;
        for(size_t i = 0; i < vec.size(); i++) {
           int times = num / vec[i].first;
           if(times > 0) {
                for(unsigned int j = 0; j < times; ++j) {
                    s += vec[i].second;
                }

                num %= vec[i].first;
           } 
        }
        
       return s;
    }
};