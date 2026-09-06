class Solution {
   public:
    int characterReplacement(string s, int k) {
        int n = s.size();

        vector<int> freq(26, 0);

        int i = 0;
        int j = 0;
        int maxi = 0;
        int maxFreq = 0;
        while (j < n) {
            freq[s[j] - 'A']++;

            int maxFreq = max(maxFreq, freq[s[j] - 'A']);

            if ((j - i + 1) - maxFreq > k) {
                while (j - i + 1 - maxFreq > k) {
                    freq[s[i] - 'A']--;
                    i++;
                }
            }

            maxi = max(maxi, j - i + 1);

            j++;
        }
        return maxi;
    }
};
