class Solution {
public:

    string encode(vector<string>& strs) {
        std::string res{""};
        for (const std::string &s : strs) {
            res.append(to_string(s.size()));
            res.append("#");
            res.append(s);
        }
        return res;
    }

    vector<string> decode(string s) {
        std::vector<std::string> res;
        size_t i = 0;
        while (i < s.length()) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }

            int length = std::stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;
    }
};
