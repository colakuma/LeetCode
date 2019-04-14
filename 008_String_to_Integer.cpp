class Solution {
public:
    int myAtoi(string str) {
        str.erase(0, str.find_first_not_of(' '));
        int last_pos = 0;
        for(last_pos = 0; last_pos < str.length(); ++last_pos) {
            if (last_pos == 0) {
                if (str[last_pos] != '+' && str[last_pos] != '-'
                    && (!(str[last_pos] >= '0' && str[last_pos] <= '9'))) {
                    break;
                }
            }
            else {
                if (!(str[last_pos] >= '0' && str[last_pos] <= '9')) {
                    break;
                }
            }
        }

        str.erase(last_pos);
        //cout<<"_"<<str<<"_"<<endl;

        if (str.empty()) {
            return 0;
        }

        if ((str[0] == '+' || str[0] == '-')) {
            if (str.length() == 1) {
                return 0;
            }
        }

        long long res = 0;
        bool is_negative = false;
        int i = 0;
        if (str[i] == '+' || str[i] == '-') {
            if (str[i] == '-') {
                is_negative = true;
            }
            ++i;
        }

        for (;i < str.length(); ++i) {
            res *= 10;
            res += str[i] - '0';
            if (res > INT32_MAX) {
                return is_negative ? INT32_MIN : INT32_MAX;
            }
        }

        return is_negative ? -res : res;
    }
};