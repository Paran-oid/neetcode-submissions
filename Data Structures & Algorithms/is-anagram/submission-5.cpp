class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, uint32_t> my_map;
        for(char c: s)
        {
            my_map[c]++;
        }
        for(char c: t)
        {
            if(!my_map.contains(c) || my_map.at(c) == 0) return false;
            my_map[c]--;
        }

        for(const auto&[c, c_count] : my_map)
        {
            if(c_count != 0) return false;
        }

        return true;
    }
};
