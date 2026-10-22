class Solution {
private:
    static constexpr int CNT_CHAR = 26;

public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        std::array<char, CNT_CHAR> count = {0}; 

        for(size_t i = 0; i < s.size(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(char val: count)
        {
            if(val != 0) return false;
        }


        return true;
    }
};
