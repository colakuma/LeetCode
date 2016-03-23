class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec_reslut;
        unordered_map<int, int> map_subs;
        unordered_map<int, int>::iterator it;
        for (size_t i = 0; i < nums.size(); i++) {
            it = map_subs.find(nums[i]);
            if(it != map_subs.end() && it->second != i) {
                vec_reslut.push_back(it->second);
                vec_reslut.push_back(i);
                break;
            }
            map_subs[target - nums[i]] = i;
        }
        
        return vec_reslut;
    }
};
