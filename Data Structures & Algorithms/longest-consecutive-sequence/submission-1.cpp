class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> my_set(nums.begin(), nums.end());

        int longest = 0;
        for(int num: my_set){
            if(!my_set.contains(num - 1)){
                int length = 1;
                while(my_set.contains(num + length)){ 
                    length++;
                }
                longest = std::max(longest, length);
            }
        }
        return longest;
    }
};
