class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while(l < r)
        {
            int sum = numbers[r] + numbers[l];
            if(sum > target) {
                r--;
            } else if (sum == target) {
                return {l + 1, r + 1};
            } else {
                l++;
            }
        }
        return {0, 0};
    }
};
