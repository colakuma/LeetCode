class Solution {
public:
int visited[256];
    int lengthOfLongestSubstring(string s) {
    	int length = 0;
    	int start_index = 0;
    	memset(visited, -1, 256 * sizeof(int));
    	int i = 0;
    	int sub_len = 0;
    	for (i = 0; i < s.length(); ++i) {
    		if (visited[s[i]] != -1 && visited[s[i]] >= start_index) {
    			if (sub_len > length) {
    				length = sub_len;
    			}
    			start_index = visited[s[i]] + 1;
    			sub_len = i - start_index + 1;	
    		} else {
    			sub_len++;
    		}
    		visited[s[i]] = i; 
    	}
    	if (sub_len > length) {
    		length = sub_len;
    	}
    
    	return length;
    }
};
