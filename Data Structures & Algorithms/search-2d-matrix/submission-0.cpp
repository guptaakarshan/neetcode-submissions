class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>arr;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr.push_back(matrix[i][j]);
            }
        }
    
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;

    }
};
