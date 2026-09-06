class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        int k = s1.size();  // window size
        int n = s2.size();
        int i = 0;
        int j = 0;

        map<char, int> mpp1;
        map<char, int> mpp2;

        for (int i = 0; i < s1.size(); i++) {
            mpp2[s1[i]]++;
        }

        while (j < n) {
            mpp1[s2[j]]++;

            if (j - i + 1 > k) {
                mpp1[s2[i]]--;

                if(mpp1[s2[i]]==0){
                    mpp1.erase(s2[i]);
                }
                i++;
            }

            if (j - i + 1 == k && mpp1 == mpp2) {
                return true;
            }
            j++;
        }
        return false;
    }
};
