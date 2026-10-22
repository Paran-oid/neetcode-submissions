class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> my_map;

        for(size_t i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int diff = target - num;
            if (my_map.contains(diff)) 
                return {my_map[diff], static_cast<int>(i)};

            my_map[num] = i;
        }
        return {};
    }
};
