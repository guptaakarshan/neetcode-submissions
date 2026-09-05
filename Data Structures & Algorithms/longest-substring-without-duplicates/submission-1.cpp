class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();

        int i=0;
        int j=0;

        if(s.size()==0){
            return 0;
        }

        int maxi=-1;
       
        map<char,int>mpp;

        while(j<n){
            
            mpp[s[j]]++;
         
            if(mpp.size()==j-i+1){
                maxi=max(maxi,j-i+1);
            }

           else if(mpp.size()<j-i+1){
                while(mpp.size()<j-i+1){
                    mpp[s[i]]--;
                    if(mpp[s[i]]==0){
                        mpp.erase(s[i]);
                    }
                    i++;
                }
            }

            j++;
        }
        return maxi;
    }
};
