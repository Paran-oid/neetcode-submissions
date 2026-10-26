class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> my_map;
        // my_map: (Zahl: Frequenz)

        for(auto item: nums) {
            my_map[item]++;
        }

        std::vector<std::pair<int, int>> vec;
        for(const auto& p: my_map){
            vec.push_back(p);
        }

        std::sort(vec.begin(), vec.end(), [](const auto& p1, const auto& p2){
            return p1.second > p2.second;
        });

        std::vector<int> res = {};
        size_t i = 0;
        for(size_t i = 0; i < k; i++){
            res.push_back(vec[i].first);
        }

        return res;
    }
};
