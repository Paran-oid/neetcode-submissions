class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        std::vector<std::vector<int>> res;
        size_t k = 0;
        while (k < nums.size() - 2) {
            if (nums[k] > 0)
                break;
            if (k != 0 && nums[k - 1] == nums[k]) {
                k++;
                continue;
            }

            int l = k + 1, r = nums.size() - 1;

            while (l < r) {
                int summe = nums[k] + nums[l] + nums[r];
                if (summe == 0) {
                    res.push_back({nums[k], nums[l], nums[r]});
                    l++;
                    r--;

                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }

                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                } else if (summe > 0) {
                    r--;
                } else {
                    l++;
                }
            }
            k++;
        }

        return res;
    }
};
