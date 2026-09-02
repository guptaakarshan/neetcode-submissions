class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();

        map<char,int>mpp;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            mpp[ch]++;
        }

        for(int i=0;i<t.size();i++){
            char ch=t[i];
            mpp[ch]--;
        }

        for(auto it:mpp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
