class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int nonZeroProduct = 1;
        int countZero = 0;
        for (int i = 0; i < n; i++) {
            product *= nums[i];

            if (nums[i] == 0) {
                countZero++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                continue;
            }
            nonZeroProduct *= nums[i];
        }
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (countZero > 1) {
                return vector<int>(n,0);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                result.push_back(nonZeroProduct);
            }

            else {
                result.push_back(product / nums[i]);
            }
        }
        return result;
    }
};
