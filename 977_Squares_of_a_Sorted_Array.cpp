// Solution 1
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret;
        int j = 0;
        for (; j < A.size(); ++j) {
            if (A[j] >= 0) {
                break;
            }
        }
        int i = j - 1;
        while (i >= 0 && j < A.size()) {
            if (-A[i] < A[j]) {
                ret.push_back(A[i] * A[i]);
                --i;
            } else {
                ret.push_back(A[j] * A[j]);
                ++j;
            }
        }
        while (j < A.size()) {
            ret.push_back(A[j] * A[j]);
            ++j;
        }
        while (i >= 0) {
            ret.push_back(A[i] * A[i]);
            --i;
        }
        return ret;
    }
};

// Solution 2
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret;
        int i = 0;
        int j = A.size() - 1;
        int si = A[i] * A[i];
        int sj = A[j] * A[j];
        while (j >= i) {
            if (si >= sj) {
                ret.push_back(si);
                ++i;
                si = i < A.size() ? A[i] * A[i] : -1;
            } else {
                ret.push_back(sj);
                --j;
                sj = j >= 0 ? A[j] * A[j] : -1;
            }
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};