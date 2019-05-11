class Solution {
public:
    int divide(int dividend, int divisor) {
        long long quotient  = 0;
        int flag = 1;
        auto dividend1 = (long long)fabs(dividend);
        auto divisor1 = (long long)fabs(divisor);
        if(dividend < 0) {
            flag = -1;
        }
        if(divisor < 0) {
            flag = flag == 1 ? -1 : 1;
        }

        std::vector<std::pair<long long, long long> > vec;
        long long times = 1;
        while (dividend1 >= divisor1) {
            vec.emplace_back(divisor1, times);
            dividend1 -= divisor1;
            quotient += times;
            divisor1 += divisor1;
            times += times;
        }

        for (int i = vec.size()-1; i >= 0; --i) {
            while(dividend1 >= vec[i].first) {
                quotient += vec[i].second;
                dividend1 -= vec[i].first;
            }
        }

        if(flag == -1) {
            quotient = -quotient;
        }

        if(quotient > INT32_MAX) {
            return  INT32_MAX;
        }
        else if (quotient < INT32_MIN) {
            return  INT32_MIN;
        }
        return quotient;
    }
};