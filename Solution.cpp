class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int freq[101], n = nums.size();
        memset(freq, 0, sizeof(freq));
        for (int& x : nums) {
            freq[x]++;
        }
        vector<int> ans = {0, n};
        for (int i = 0; i <= 100; i++) {
            int value = freq[i];
            if (value % 2 == 1) {
                value -= 1;
            }
            ans[0] += value / 2;
            ans[1] -= value;
        }
        return ans;
    }
};
