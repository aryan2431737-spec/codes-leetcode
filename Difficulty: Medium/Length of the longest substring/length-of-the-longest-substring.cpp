class Solution {
public:
    int longestUniqueSubstring(string &s) {
        vector<int> vis(26, 0);
        int i = 0, l = 0, count = 0;

        while (i < s.size()) {
            while (vis[s[i] - 'a'] == 1) {
                vis[s[l] - 'a'] = 0;  
                l++;
            }
            vis[s[i] - 'a'] = 1;      
            count = max(count, i - l + 1);
            i++;
        }
        return count;
    }
};