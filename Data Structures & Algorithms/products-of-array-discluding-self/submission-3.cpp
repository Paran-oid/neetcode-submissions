class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        size_t n = nums.size();
        std::vector<int> res(n, 1);

        for(size_t i = 1; i < n; i++) {
            res[i] = nums[i - 1] * res[i - 1];
        }

        int postfix = 1;
        for(int i = n - 1; i >= 0; i--) {
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};
