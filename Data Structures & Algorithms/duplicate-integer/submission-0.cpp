class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> our_set;
        for(size_t i = 0; i < nums.size(); i++)
        {
            if(our_set.contains(nums[i])) return true;
            our_set.insert(nums[i]);
        }
        return false;
    }
};