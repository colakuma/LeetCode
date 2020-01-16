class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> ret;
        std::unordered_set<int> num1_set;
        for(const auto& num1 : nums1) {
            num1_set.insert(num1);
        }

        for(const auto& num2 : nums2){
            auto itr = num1_set.find(num2);
            if(itr != num1_set.end()){
                ret.push_back(num2);
                num1_set.erase(itr);
            }
        }

        return ret;
    }
};