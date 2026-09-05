class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();

        int low=0;
        int high=n-1;
        int area=0;
        int maxi=-1;

        for(int i=0;i<n;i++){

            area=(high-low) * min(heights[low],heights[high]);

            maxi=max(maxi,area);

            if(heights[low]<=heights[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;

    }
};
