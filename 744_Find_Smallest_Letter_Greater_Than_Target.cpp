class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size() - 1;
        int mid = 0;
        while(low <= high) {
            mid = (high + low) / 2;
            if (letters[mid] <= target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return letters[low % letters.size()];
    }
};