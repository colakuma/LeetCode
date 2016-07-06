class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0;
        int b = 0;
        int visited_a[10];
        int visited_b[10];
        memset(visited_a, 0, 10 * sizeof(int));
        memset(visited_b, 0, 10 * sizeof(int));
        for (int i = 0; i < secret.length(); ++i) {
            int s = secret[i] - '0';
            int g = guess[i] - '0';
            if(s == g) {
                a++;
            } else {
                if (visited_b[s] > 0) {
                    visited_b[s]--;
                    b++;
                } else {
                    visited_a[s]++;
                }
                if (visited_a[g] > 0) {
                    visited_a[g]--;
                    b++;
                } else {
                    visited_b[g]++;
                }
            }
        }
        char hint[128];
        sprintf(hint, "%dA%dB", a, b);
        return string(hint);
    }
};
