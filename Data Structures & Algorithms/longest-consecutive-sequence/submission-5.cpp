class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();

        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        sort(nums.begin(),nums.end());

        int count=1;
        int maxi=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=1;
            }
        }
        return maxi;

    }
};
