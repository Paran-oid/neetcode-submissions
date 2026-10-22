class Solution {
private:

public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> my_map;
        for(const auto& str: strs)
        {
            std::vector<int> count(26, 0);
            for(char c: str)
            {
                count[c - 'a']++;
            }

            std::string key = std::to_string(count[0]);
            for(size_t i = 1; i < 26; i++)
            {
                key += ',' + std::to_string(count[i]);
            }

            my_map[key].push_back(str);
        }

        std::vector<std::vector<std::string>> res;

        for(const auto& [key, val]: my_map)
        {
            res.push_back(val);
        }
        return res;
    }
};
