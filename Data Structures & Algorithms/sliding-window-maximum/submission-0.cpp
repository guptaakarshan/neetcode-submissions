class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>result;
        map<int,int>mpp;
        int i=0;
        int j=0;
        
        while(j<n){
            mpp[nums[j]]++;
            
             if(j-i+1>k){
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            if(j-i+1==k){
                int maxi=INT_MIN;
                for(auto it:mpp){
                    maxi=max(maxi,it.first);
                }
                result.push_back(maxi);
            }
            j++;
        }
        return result;
    }
};
